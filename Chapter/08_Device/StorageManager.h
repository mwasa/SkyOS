#pragma once
#include "FileSystem.h"

//저장장치는 최대 26개
#define STORAGE_DEVICE_MAX 26

class StorageManager
{
public:	
	~StorageManager();

	static StorageManager* GetInstance()
	{
		if (m_pStorageManager == nullptr)
			m_pStorageManager = new StorageManager();

		return m_pStorageManager;
	}

//인터페이스
	bool RegisterFileSystem(FileSystem* fsys, DWORD deviceID);
	bool UnregisterFileSystem(FileSystem* fsys);
	bool UnregisterFileSystemByID(DWORD deviceID);

	bool SetCurrentFileSystemByID(DWORD deviceID);
	bool SetCurrentFileSystem(FileSystem* fsys);

//파일 메소드
	PFILE OpenFile(const char* fname, const char *mode);
	int ReadFile(PFILE file, unsigned char* Buffer, unsigned int length);
	bool CloseFile(PFILE file);

private:
	StorageManager();
	static StorageManager* m_pStorageManager;

	FileSystem* m_fileSystems[STORAGE_DEVICE_MAX];
	int m_stroageCount;
	FileSystem* m_pCurrentFileSystem;
};