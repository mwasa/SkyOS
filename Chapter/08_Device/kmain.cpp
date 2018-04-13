﻿#include "kmain.h"
#include "SkyTest.h"
#include "PhysicalMemoryManager.h"
#include "VirtualMemoryManager.h"
#include "HeapManager.h"
#include "HardDisk.h"
#include "Partition.h"
#include "GFS.H"
#include "FAT32.H"

_declspec(naked) void multiboot_entry(void)
{
	__asm {
		align 4

		multiboot_header:
		//멀티부트 헤더 사이즈 : 0X20
		dd(MULTIBOOT_HEADER_MAGIC); magic number
		dd(MULTIBOOT_HEADER_FLAGS); flags
		dd(CHECKSUM); checksum
		dd(HEADER_ADRESS); //헤더 주소 KERNEL_LOAD_ADDRESS+ALIGN(0x100064)
		dd(KERNEL_LOAD_ADDRESS); //커널이 로드된 가상주소 공간
		dd(00); //사용되지 않음
		dd(00); //사용되지 않음
		dd(HEADER_ADRESS + 0x20); //커널 시작 주소 : 멀티부트 헤더 주소 + 0x20, kernel_entry
			
		kernel_entry :
		mov     esp, KERNEL_STACK; //스택 설정

		push    0; //플래그 레지스터 초기화
		popf

		//GRUB에 의해 담겨 있는 정보값을 스택에 푸쉬한다.
		push    ebx; //멀티부트 구조체 포인터
		push    eax; //매직 넘버

		//위의 두 파라메터와 함께 kmain 함수를 호출한다.
		call    kmain; //C++ 메인 함수 호출

		//루프를 돈다. kmain이 리턴되지 않으면 아래 코드는 수행되지 않는다.
		halt:
		jmp halt;
	}
}

uint32_t g_freeMemoryStartAddress = 0x00400000; //자유공간 시작주소 : 4MB
uint32_t g_freeMemorySize = 0;

void HardwareInitiize();
bool InitMemoryManager(multiboot_info* bootinfo);
void InitHardDisk();

void kmain(unsigned long magic, unsigned long addr)
{				
	InitializeConstructors();

	multiboot_info* pBootInfo = (multiboot_info*)addr;

	SkyConsole::Initialize();
		
	//헥사를 표시할 때 %X는 integer, %x는 unsigned integer의 헥사값을 표시한다.	
	SkyConsole::Print("*** Sky OS Console System Init ***\n");

	SkyConsole::Print("GRUB Information\n");
	SkyConsole::Print("Boot Loader Name : %s\n", (char*)pBootInfo->boot_loader_name);

	kEnterCriticalSection(&g_criticalSection);

	HardwareInitiize();
	SkyConsole::Print("Hardware Init Complete\n");

	SetInterruptVector();
	
	SkyConsole::Print("Interrput Handler Init Complete\n");

//물/가상 메모리 매니저를 초기화한다.
//설정 시스템 메모리는 128MB
	InitMemoryManager(pBootInfo);

	SkyConsole::Print("Memory Manager Init Complete\n");

	int heapFrameCount = 256 * 10 * 5; //프레임수 12800개, 52MB
	unsigned int requiredHeapSize = heapFrameCount * PAGE_SIZE;

//요구되는 힙의 크기가 자유공간보다 크다면 그 크기를 자유공간 크기로 맞춘다음 반으로 줄인다.
	if (requiredHeapSize > g_freeMemorySize)
	{
		requiredHeapSize = g_freeMemorySize;
		heapFrameCount = requiredHeapSize / PAGE_SIZE / 2;
	}

	HeapManager::InitKernelHeap(heapFrameCount);

	SkyConsole::Print("Heap %dMB Allocated\n", requiredHeapSize / 1048576);

	kLeaveCriticalSection(&g_criticalSection);

	StartPITCounter(100, I86_PIT_OCW_COUNTER_0, I86_PIT_OCW_MODE_SQUAREWAVEGEN);	

	InitHardDisk();

	for (;;);
}

void HardwareInitiize()
{
	GDTInitialize();
	IDTInitialize(0x8);
	PICInitialize(0x20, 0x28);
	InitializePIT();
}

uint32_t GetFreeSpaceMemory(multiboot_info* bootinfo)
{
	uint32_t memorySize = 0;
	uint32_t mmapEntryNum = bootinfo->mmap_length / sizeof(multiboot_memory_map_t);

	uint32_t mmapAddr = bootinfo->mmap_addr;

#ifdef _SKY_DEBUG
	SkyConsole::Print("Memory Map Entry Num : %d\n", mmapEntryNum);
#endif

	for (uint32_t i = 0; i < mmapEntryNum; i++)
	{
		multiboot_memory_map_t* entry = (multiboot_memory_map_t*)mmapAddr;

#ifdef _SKY_DEBUG
		SkyConsole::Print("Memory Address : %x\n", entry->addr);
		SkyConsole::Print("Memory Length : %x\n", entry->len);
		SkyConsole::Print("Memory Type : %x\n", entry->type);
		SkyConsole::Print("Entry Size : %d\n", entry->size);
#endif

		mmapAddr += sizeof(multiboot_memory_map_t);

		if (entry->addr + entry->len < g_freeMemoryStartAddress)
			continue;

		if (memorySize > entry->len)
			continue;

		memorySize = entry->len;

		if (entry->addr < g_freeMemoryStartAddress)
			memorySize -= (g_freeMemoryStartAddress - entry->addr);
		else
			g_freeMemoryStartAddress = entry->addr;
	}

	memorySize -= (memorySize % 4096);

	return memorySize;
}

bool InitMemoryManager(multiboot_info* bootinfo)
{
	PhysicalMemoryManager::EnablePaging(false);

	g_freeMemorySize = GetFreeSpaceMemory(bootinfo);

	//물리 메모리 매니저 초기화
	PhysicalMemoryManager::Initialize(g_freeMemorySize, g_freeMemoryStartAddress);
	//PhysicalMemoryManager::Dump();

	//가상 메모리 매니저 초기화	
	VirtualMemoryManager::Initialize();
	//PhysicalMemoryManager::Dump();

	SkyConsole::Print("Free Memory Start Address(0x%x)\n", g_freeMemoryStartAddress);
	SkyConsole::Print("Free Memory Size(%dMB)\n", g_freeMemorySize / 1048576);
	
	return true;
}

void PrintDriveMappingInfo()
{
	int bTotalDrives = GetTotalDrives();
	int i;
	for (i = 0; i<bTotalDrives; i++)
	{
		SkyConsole::Print("%c: (%s) [%s]\n", 'A' + i, sysDevicePathLookupTable[i].szDevicePath, GetPartititionTypeString(PART_TYPE(&sysDevicePathLookupTable[i].Part)));
	}
}

void InitHardDisk()
{
	/*if (true == InitHardDrive())
	{
	InitFATFileSystem();
	#ifdef _SKY_DEBUG
	TestHardDrive();
	#endif
	InitializeVFSFat32();
	SkyConsole::Print("Harddisk Init..\n");
	}
	else
	{
	SkyConsole::Print("Harddisk not detected..\n");
	}*/

	HardDisk_Initialize();

	//FillDevicePathLookupTable();
	PrintDriveMappingInfo();

	GFS_Init();
	//FAT_Init();

	SkyConsole::Print(" %d device(s) found\n", HDD_GetNoOfDevices());
	GFS_DeleteFile("C:\\Test.bat");

	if (HDD_GetNoOfDevices())
	{
		HANDLE hFile = NULL;
		hFile = GFS_CreateFile("C:\MENU.LST", GENERIC_READ, 0, OPEN_EXISTING, 0);

		if (hFile == NULL)
		{
			SkyConsole::Print("Open file failed : %s\n", "menu.lst");
		}
		else
		{
			char buffer[1000];
			int c = GFS_ReadFile(hFile, 1000, buffer);

			while (c != 0)
			{
				if (c)
				{
					int i;
					for (i = 0; i < c; i++)
						SkyConsole::Print("%c", buffer[i]);
				}
				c = GFS_ReadFile(hFile, 1000, buffer);
			}
		}
		//PrintHDDInfo();
	}
}