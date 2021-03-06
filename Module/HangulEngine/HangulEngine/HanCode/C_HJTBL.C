/*
 *      File C_HJTBL.C
 *      Hangul-Hanja Conversion Table
 *      '95.9.8-9,22
 *      Written by Inkeon Lim
 *
 *      Modified by fontutil ('07.7.28)
 */


#include "hancode.h"


hanjatbl_t _hanjatbl[MAXHANJATBL + 1] = {
    {{0x81, 0xA1, 0xC0}, 29,    0, 1},
    {{0x81, 0xA1, 0xC1}, 11,   29, 1},
    {{0x81, 0xA1, 0xC4}, 24,   40, 1},
    {{0x81, 0xA1, 0xC8}, 10,   64, 1},
    {{0x81, 0xA1, 0xD0}, 20,   74, 1},
    {{0x81, 0xA1, 0xD1},  6,   94, 1},
    {{0x81, 0xA1, 0xD5}, 24,  100, 1},
    {{0x81, 0xA2, 0xC0}, 20,  124, 1},
    {{0x81, 0xA2, 0xC1},  2,  144, 1},
    {{0x81, 0xA2, 0xD5},  4,  146, 1},
    {{0x81, 0xA3, 0xC1},  1,  150, 1},
    {{0x81, 0xA5, 0xC0}, 17,  151, 1},
    {{0x81, 0xA5, 0xC4}, 12,  168, 1},
    {{0x81, 0xA5, 0xC8},  4,  180, 1},
    {{0x81, 0xA5, 0xD0},  7,  184, 1},
    {{0x81, 0xA5, 0xD1},  3,  191, 1},
    {{0x81, 0xA6, 0xC0},  3,  194, 1},
    {{0x81, 0xA7, 0xC1},  7,  197, 1},
    {{0x81, 0xA7, 0xC4}, 11,  204, 1},
    {{0x81, 0xA7, 0xC8},  6,  215, 1},
    {{0x81, 0xA7, 0xD0},  6,  221, 1},
    {{0x81, 0xA7, 0xD5}, 45,  227, 1},
    {{0x81, 0xA8, 0xC0}, 24,  272, 1},
    {{0x81, 0xA9, 0xC0}, 39,  296, 1},
    {{0x81, 0xA9, 0xC1},  7,  335, 1},
    {{0x81, 0xA9, 0xC4}, 10,  342, 1},
    {{0x81, 0xA9, 0xC8},  3,  352, 1},
    {{0x81, 0xA9, 0xD5}, 16,  355, 1},
    {{0x81, 0xA9, 0xD6},  1,  371, 1},
    {{0x81, 0xAA, 0xC0}, 12,  372, 1},
    {{0x81, 0xAA, 0xC1},  4,  384, 1},
    {{0x81, 0xAA, 0xC4}, 17,  388, 1},
    {{0x81, 0xAA, 0xC8},  4,  405, 1},
    {{0x81, 0xAA, 0xD5}, 13,  409, 1},
    {{0x81, 0xAB, 0xC0},  3,  422, 1},
    {{0x81, 0xAC, 0xC0},  9,  425, 1},
    {{0x81, 0xAC, 0xD5},  4,  434, 1},
    {{0x81, 0xAD, 0xC0}, 25,  438, 1},
    {{0x81, 0xAE, 0xC0}, 54,  463, 1},
    {{0x81, 0xAE, 0xC1},  6,  517, 1},
    {{0x81, 0xAE, 0xC4},  6,  523, 1},
    {{0x81, 0xAE, 0xC8},  4,  529, 1},
    {{0x81, 0xAE, 0xD5},  6,  533, 1},
    {{0x81, 0xAF, 0xC4}, 10,  539, 1},
    {{0x81, 0xAF, 0xC8},  5,  549, 1},
    {{0x81, 0xB0, 0xC0},  6,  554, 1},
    {{0x81, 0xB1, 0xC0},  6,  560, 1},
    {{0x81, 0xB2, 0xC0}, 15,  566, 1},
    {{0x81, 0xB2, 0xC4},  7,  581, 1},
    {{0x81, 0xB2, 0xC8},  1,  588, 1},
    {{0x81, 0xB3, 0xC1},  7,  589, 1},
    {{0x81, 0xB3, 0xC4}, 15,  596, 1},
    {{0x81, 0xB3, 0xC8},  1,  611, 1},
    {{0x81, 0xB3, 0xD0}, 14,  612, 1},
    {{0x81, 0xB3, 0xD1},  7,  626, 1},
    {{0x81, 0xB3, 0xD5},  4,  633, 1},
    {{0x81, 0xB5, 0xC0}, 64,  637, 1},
    {{0x81, 0xB5, 0xC4},  1,  701, 1},
    {{0x81, 0xB5, 0xC8},  4,  702, 1},
    {{0x81, 0xB5, 0xD0},  1,  706, 1},
    {{0x82, 0xB5, 0xC1},  1,  707, 1},
    {{0x83, 0xA1, 0xC0}, 15,  708, 1},
    {{0x83, 0xA1, 0xC1},  8,  723, 1},
    {{0x83, 0xA1, 0xC4},  9,  731, 1},
    {{0x83, 0xA1, 0xC8},  2,  740, 1},
    {{0x83, 0xA1, 0xD0},  9,  742, 1},
    {{0x83, 0xA1, 0xD1},  5,  751, 1},
    {{0x83, 0xA1, 0xD5},  7,  756, 1},
    {{0x83, 0xA2, 0xC0},  6,  763, 1},
    {{0x83, 0xA2, 0xD5},  1,  769, 1},
    {{0x83, 0xA7, 0xC0},  1,  770, 1},
    {{0x83, 0xA7, 0xC4},  3,  771, 1},
    {{0x83, 0xA7, 0xD0},  4,  774, 1},
    {{0x83, 0xA7, 0xD5},  2,  778, 1},
    {{0x83, 0xA9, 0xC0}, 18,  780, 1},
    {{0x83, 0xA9, 0xC1},  6,  798, 1},
    {{0x83, 0xA9, 0xC4},  1,  804, 1},
    {{0x83, 0xA9, 0xD5},  7,  805, 1},
    {{0x83, 0xAC, 0xC0},  6,  812, 1},
    {{0x83, 0xAD, 0xC0},  1,  818, 1},
    {{0x83, 0xAE, 0xC0},  8,  819, 1},
    {{0x83, 0xAE, 0xC4},  1,  827, 1},
    {{0x83, 0xAE, 0xC8},  1,  828, 1},
    {{0x83, 0xB2, 0xC0},  2,  829, 1},
    {{0x83, 0xB3, 0xC1},  2,  831, 1},
    {{0x83, 0xB3, 0xD0},  1,  833, 1},
    {{0x83, 0xB3, 0xD5},  6,  834, 1},
    {{0x83, 0xB5, 0xC0},  2,  840, 1},
    {{0x83, 0xB5, 0xC1},  2,  842, 1},
    {{0x84, 0xA1, 0xC0},  2,  844, 1},
    {{0x84, 0xA1, 0xC4}, 20,  846, 1},
    {{0x84, 0xA1, 0xC8},  5,  866, 1},
    {{0x84, 0xA1, 0xD0}, 17,  871, 1},
    {{0x84, 0xA1, 0xD1},  5,  888, 1},
    {{0x84, 0xA1, 0xD5}, 11,  893, 1},
    {{0x84, 0xA2, 0xC0}, 16,  904, 1},
    {{0x84, 0xA2, 0xC1},  1,  920, 1},
    {{0x84, 0xA5, 0xC1},  2,  921, 1},
    {{0x84, 0xA9, 0xC0}, 40,  923, 1},
    {{0x84, 0xA9, 0xC1}, 10,  963, 1},
    {{0x84, 0xA9, 0xC4}, 10,  973, 1},
    {{0x84, 0xA9, 0xC8},  2,  983, 1},
    {{0x84, 0xA9, 0xD5}, 17,  985, 1},
    {{0x84, 0xAE, 0xC0}, 11, 1002, 1},
    {{0x84, 0xAE, 0xC4},  6, 1013, 1},
    {{0x84, 0xB3, 0xC1},  1, 1019, 1},
    {{0x84, 0xB3, 0xD5},  9, 1020, 1},
    {{0x86, 0xA1, 0xC0},  9, 1029, 1},
    {{0x86, 0xA1, 0xC1},  9, 1038, 1},
    {{0x86, 0xA1, 0xC4},  9, 1047, 1},
    {{0x86, 0xA1, 0xC8},  2, 1056, 1},
    {{0x86, 0xA1, 0xD0}, 10, 1058, 1},
    {{0x86, 0xA1, 0xD1},  3, 1068, 1},
    {{0x86, 0xA1, 0xD5},  8, 1071, 1},
    {{0x86, 0xA2, 0xC0},  4, 1079, 1},
    {{0x86, 0xA2, 0xD5},  2, 1083, 1},
    {{0x86, 0xA3, 0xC1},  1, 1085, 1},
    {{0x86, 0xA3, 0xD5}, 13, 1086, 1},
    {{0x86, 0xA7, 0xC0}, 18, 1099, 1},
    {{0x86, 0xA7, 0xC1},  7, 1117, 1},
    {{0x86, 0xA7, 0xC4}, 12, 1124, 1},
    {{0x86, 0xA7, 0xC8},  6, 1136, 1},
    {{0x86, 0xA7, 0xD0},  5, 1142, 1},
    {{0x86, 0xA7, 0xD1},  1, 1147, 1},
    {{0x86, 0xA7, 0xD5}, 18, 1148, 1},
    {{0x86, 0xA8, 0xC0},  5, 1166, 1},
    {{0x86, 0xA9, 0xC0}, 18, 1171, 1},
    {{0x86, 0xA9, 0xC1},  7, 1189, 1},
    {{0x86, 0xA9, 0xC4},  1, 1196, 1},
    {{0x86, 0xA9, 0xD5},  7, 1197, 1},
    {{0x86, 0xAC, 0xC0},  8, 1204, 1},
    {{0x86, 0xAD, 0xC0}, 12, 1212, 1},
    {{0x86, 0xAD, 0xD5},  1, 1224, 1},
    {{0x86, 0xAE, 0xC0}, 13, 1225, 1},
    {{0x86, 0xB2, 0xC0}, 14, 1238, 1},
    {{0x86, 0xB2, 0xC1},  3, 1252, 1},
    {{0x86, 0xB2, 0xC4},  6, 1255, 1},
    {{0x86, 0xB2, 0xC8},  4, 1261, 1},
    {{0x86, 0xB2, 0xD5},  1, 1265, 1},
    {{0x86, 0xB3, 0xC1},  2, 1266, 1},
    {{0x86, 0xB3, 0xD0},  1, 1268, 1},
    {{0x86, 0xB3, 0xD5},  6, 1269, 1},
    {{0x86, 0xB5, 0xC0}, 26, 1275, 1},
    {{0x86, 0xB5, 0xC4},  9, 1301, 1},
    {{0x86, 0xB5, 0xD0},  5, 1310, 1},
    {{0x86, 0xB5, 0xD1},  4, 1315, 1},
    {{0x87, 0xA1, 0xC0},  8, 1319, 1},
    {{0x87, 0xA1, 0xC1},  6, 1327, 1},
    {{0x87, 0xA1, 0xC4}, 19, 1333, 1},
    {{0x87, 0xA1, 0xC8},  7, 1352, 1},
    {{0x87, 0xA1, 0xD5}, 12, 1359, 1},
    {{0x87, 0xA2, 0xC0}, 14, 1371, 1},
    {{0x87, 0xA2, 0xC1},  5, 1385, 1},
    {{0x87, 0xA2, 0xD5},  6, 1390, 1},
    {{0x87, 0xA7, 0xC1},  2, 1396, 1},
    {{0x87, 0xA7, 0xC4}, 11, 1398, 1},
    {{0x87, 0xA7, 0xC8},  2, 1409, 1},
    {{0x87, 0xA7, 0xD5}, 15, 1411, 1},
    {{0x87, 0xA8, 0xC0},  1, 1426, 1},
    {{0x87, 0xA9, 0xC0}, 24, 1427, 1},
    {{0x87, 0xA9, 0xC1},  7, 1451, 1},
    {{0x87, 0xA9, 0xC8},  2, 1458, 1},
    {{0x87, 0xA9, 0xD5},  3, 1460, 1},
    {{0x87, 0xAD, 0xC0}, 12, 1463, 1},
    {{0x87, 0xAE, 0xC0}, 22, 1475, 1},
    {{0x87, 0xAE, 0xC1},  2, 1497, 1},
    {{0x87, 0xAE, 0xC4}, 12, 1499, 1},
    {{0x87, 0xAE, 0xC8},  3, 1511, 1},
    {{0x87, 0xB5, 0xC0}, 19, 1514, 1},
    {{0x87, 0xB5, 0xC4}, 13, 1533, 1},
    {{0x87, 0xB5, 0xC8},  3, 1546, 1},
    {{0x88, 0xA1, 0xC1}, 19, 1549, 1},
    {{0x88, 0xA1, 0xC4}, 25, 1568, 1},
    {{0x88, 0xA1, 0xC8}, 11, 1593, 1},
    {{0x88, 0xA1, 0xD5}, 28, 1604, 1},
    {{0x88, 0xA2, 0xC0}, 20, 1632, 1},
    {{0x88, 0xA2, 0xC1},  8, 1652, 1},
    {{0x88, 0xA5, 0xC4}, 10, 1660, 1},
    {{0x88, 0xA5, 0xC8},  4, 1670, 1},
    {{0x88, 0xA5, 0xD0},  9, 1674, 1},
    {{0x88, 0xA5, 0xD1},  2, 1683, 1},
    {{0x88, 0xA7, 0xC1}, 11, 1685, 1},
    {{0x88, 0xA7, 0xC4},  7, 1696, 1},
    {{0x88, 0xA7, 0xC8},  4, 1703, 1},
    {{0x88, 0xA7, 0xD5}, 17, 1707, 1},
    {{0x88, 0xA9, 0xC0}, 16, 1724, 1},
    {{0x88, 0xA9, 0xC1}, 17, 1740, 1},
    {{0x88, 0xA9, 0xC4},  1, 1757, 1},
    {{0x88, 0xA9, 0xC8},  1, 1758, 1},
    {{0x88, 0xA9, 0xD5}, 16, 1759, 1},
    {{0x88, 0xAE, 0xC0}, 43, 1775, 1},
    {{0x88, 0xAE, 0xC1},  1, 1818, 1},
    {{0x88, 0xAE, 0xC4}, 19, 1819, 1},
    {{0x88, 0xAE, 0xC8},  5, 1838, 1},
    {{0x88, 0xAE, 0xD5},  6, 1843, 1},
    {{0x88, 0xB5, 0xC0}, 43, 1849, 1},
    {{0x88, 0xB5, 0xC4}, 14, 1892, 1},
    {{0x88, 0xB5, 0xD5},  4, 1906, 1},
    {{0x8A, 0xA1, 0xC0}, 60, 1910, 1},
    {{0x8A, 0xA1, 0xC1},  4, 1970, 1},
    {{0x8A, 0xA1, 0xC4}, 12, 1974, 1},
    {{0x8A, 0xA1, 0xC8},  5, 1986, 1},
    {{0x8A, 0xA1, 0xD0},  8, 1991, 1},
    {{0x8A, 0xA1, 0xD1},  4, 1999, 1},
    {{0x8A, 0xA1, 0xD5}, 31, 2003, 1},
    {{0x8A, 0xA2, 0xC0},  3, 2034, 1},
    {{0x8A, 0xA2, 0xC1},  5, 2037, 1},
    {{0x8A, 0xA2, 0xD5},  5, 2042, 1},
    {{0x8A, 0xA5, 0xC0}, 30, 2047, 1},
    {{0x8A, 0xA5, 0xC1}, 15, 2077, 1},
    {{0x8A, 0xA5, 0xC4}, 32, 2092, 1},
    {{0x8A, 0xA5, 0xC8}, 13, 2124, 1},
    {{0x8A, 0xA5, 0xD0},  8, 2137, 1},
    {{0x8A, 0xA5, 0xD1},  4, 2145, 1},
    {{0x8A, 0xA5, 0xD5}, 18, 2149, 1},
    {{0x8A, 0xA6, 0xC0},  9, 2167, 1},
    {{0x8A, 0xA9, 0xC0}, 37, 2176, 1},
    {{0x8A, 0xA9, 0xC1},  9, 2213, 1},
    {{0x8A, 0xA9, 0xC4},  6, 2222, 1},
    {{0x8A, 0xA9, 0xC8},  1, 2228, 1},
    {{0x8A, 0xA9, 0xD5},  8, 2229, 1},
    {{0x8A, 0xAB, 0xC0},  5, 2237, 1},
    {{0x8A, 0xAC, 0xC0},  2, 2242, 1},
    {{0x8A, 0xAE, 0xC0}, 61, 2244, 1},
    {{0x8A, 0xAE, 0xC1}, 12, 2305, 1},
    {{0x8A, 0xAE, 0xC4}, 27, 2317, 1},
    {{0x8A, 0xAE, 0xC8},  4, 2344, 1},
    {{0x8A, 0xAE, 0xD5},  3, 2348, 1},
    {{0x8A, 0xB3, 0xC8},  3, 2351, 1},
    {{0x8A, 0xB3, 0xD1},  5, 2354, 1},
    {{0x8A, 0xB3, 0xD5}, 10, 2359, 1},
    {{0x8A, 0xB5, 0xC0}, 28, 2369, 1},
    {{0x8A, 0xB5, 0xC1}, 15, 2397, 1},
    {{0x8A, 0xB5, 0xC4}, 24, 2412, 1},
    {{0x8A, 0xB5, 0xC8},  4, 2436, 1},
    {{0x8A, 0xB5, 0xD0}, 10, 2440, 1},
    {{0x8A, 0xB5, 0xD1},  3, 2450, 1},
    {{0x8B, 0xA1, 0xD5},  1, 2453, 1},
    {{0x8B, 0xB5, 0xC0},  1, 2454, 1},
    {{0x8C, 0xA1, 0xC0}, 18, 2455, 1},
    {{0x8C, 0xA1, 0xC1}, 14, 2473, 1},
    {{0x8C, 0xA1, 0xC4}, 10, 2487, 1},
    {{0x8C, 0xA1, 0xC8},  4, 2497, 1},
    {{0x8C, 0xA1, 0xD0},  8, 2501, 1},
    {{0x8C, 0xA1, 0xD1},  4, 2509, 1},
    {{0x8C, 0xA1, 0xD5},  7, 2513, 1},
    {{0x8C, 0xA2, 0xC0}, 11, 2520, 1},
    {{0x8C, 0xA2, 0xC1},  7, 2531, 1},
    {{0x8C, 0xA2, 0xD5},  4, 2538, 1},
    {{0x8C, 0xA3, 0xC0}, 11, 2542, 1},
    {{0x8C, 0xA3, 0xC1},  9, 2553, 1},
    {{0x8C, 0xA3, 0xD5}, 31, 2562, 1},
    {{0x8C, 0xA5, 0xC0}, 10, 2593, 1},
    {{0x8C, 0xA5, 0xC1},  5, 2603, 1},
    {{0x8C, 0xA5, 0xC4},  6, 2608, 1},
    {{0x8C, 0xA5, 0xC8},  2, 2614, 1},
    {{0x8C, 0xA5, 0xD0},  6, 2616, 1},
    {{0x8C, 0xA5, 0xD1},  2, 2622, 1},
    {{0x8C, 0xA6, 0xC4},  1, 2624, 1},
    {{0x8C, 0xA7, 0xC0}, 24, 2625, 1},
    {{0x8C, 0xA7, 0xC1}, 13, 2649, 1},
    {{0x8C, 0xA7, 0xC4}, 43, 2662, 1},
    {{0x8C, 0xA7, 0xC8}, 10, 2705, 1},
    {{0x8C, 0xA7, 0xD0}, 15, 2715, 1},
    {{0x8C, 0xA7, 0xD1},  4, 2730, 1},
    {{0x8C, 0xA7, 0xD5}, 40, 2734, 1},
    {{0x8C, 0xA8, 0xC0}, 24, 2774, 1},
    {{0x8C, 0xA9, 0xC0}, 30, 2798, 1},
    {{0x8C, 0xA9, 0xC1},  5, 2828, 1},
    {{0x8C, 0xA9, 0xC4},  6, 2833, 1},
    {{0x8C, 0xA9, 0xC8},  1, 2839, 1},
    {{0x8C, 0xA9, 0xD5},  9, 2840, 1},
    {{0x8C, 0xAA, 0xC0},  8, 2849, 1},
    {{0x8C, 0xAA, 0xC4}, 18, 2857, 1},
    {{0x8C, 0xAA, 0xC8},  1, 2875, 1},
    {{0x8C, 0xAA, 0xD5},  5, 2876, 1},
    {{0x8C, 0xAB, 0xC0},  4, 2881, 1},
    {{0x8C, 0xAC, 0xC0},  5, 2885, 1},
    {{0x8C, 0xAD, 0xC0}, 38, 2890, 1},
    {{0x8C, 0xAD, 0xC1},  6, 2928, 1},
    {{0x8C, 0xAD, 0xD5}, 24, 2934, 1},
    {{0x8C, 0xAE, 0xC0}, 32, 2958, 1},
    {{0x8C, 0xAE, 0xC1},  9, 2990, 1},
    {{0x8C, 0xAE, 0xC4}, 13, 2999, 1},
    {{0x8C, 0xAE, 0xC8},  3, 3012, 1},
    {{0x8C, 0xAE, 0xD5},  2, 3015, 1},
    {{0x8C, 0xAF, 0xC4}, 27, 3017, 1},
    {{0x8C, 0xAF, 0xC8},  3, 3044, 1},
    {{0x8C, 0xB1, 0xC0}, 25, 3047, 1},
    {{0x8C, 0xB2, 0xC0}, 56, 3072, 1},
    {{0x8C, 0xB2, 0xC1},  7, 3128, 1},
    {{0x8C, 0xB2, 0xC4}, 13, 3135, 1},
    {{0x8C, 0xB2, 0xC8},  5, 3148, 1},
    {{0x8C, 0xB2, 0xD5},  5, 3153, 1},
    {{0x8C, 0xB3, 0xC4},  7, 3158, 1},
    {{0x8C, 0xB3, 0xC8},  1, 3165, 1},
    {{0x8C, 0xB3, 0xD0},  6, 3166, 1},
    {{0x8C, 0xB3, 0xD1},  3, 3172, 1},
    {{0x8C, 0xB3, 0xD5},  4, 3175, 1},
    {{0x8C, 0xB4, 0xC0}, 19, 3179, 1},
    {{0x8C, 0xB5, 0xC0}, 38, 3198, 1},
    {{0x8C, 0xB5, 0xC1},  8, 3236, 1},
    {{0x8C, 0xB5, 0xC4}, 24, 3244, 1},
    {{0x8C, 0xB5, 0xC8},  9, 3268, 1},
    {{0x8C, 0xB5, 0xD0}, 11, 3277, 1},
    {{0x8C, 0xB5, 0xD1},  5, 3288, 1},
    {{0x8C, 0xB5, 0xD5},  4, 3293, 1},
    {{0x8D, 0xA1, 0xC0}, 26, 3297, 1},
    {{0x8D, 0xA1, 0xC1}, 13, 3323, 1},
    {{0x8D, 0xA1, 0xC4},  5, 3336, 1},
    {{0x8D, 0xA1, 0xD0},  6, 3341, 1},
    {{0x8D, 0xA1, 0xD1},  1, 3347, 1},
    {{0x8D, 0xA1, 0xD5}, 37, 3348, 1},
    {{0x8D, 0xA2, 0xC0}, 17, 3385, 1},
    {{0x8D, 0xA2, 0xD5},  4, 3402, 1},
    {{0x8D, 0xA5, 0xC0}, 28, 3406, 1},
    {{0x8D, 0xA5, 0xC1}, 25, 3434, 1},
    {{0x8D, 0xA5, 0xC4}, 41, 3459, 1},
    {{0x8D, 0xA5, 0xC8},  8, 3500, 1},
    {{0x8D, 0xA5, 0xD0},  9, 3508, 1},
    {{0x8D, 0xA5, 0xD1},  3, 3517, 1},
    {{0x8D, 0xA5, 0xD5}, 55, 3520, 1},
    {{0x8D, 0xA6, 0xC0}, 23, 3575, 1},
    {{0x8D, 0xA9, 0xC0}, 46, 3598, 1},
    {{0x8D, 0xA9, 0xC1},  4, 3644, 1},
    {{0x8D, 0xA9, 0xC4},  2, 3648, 1},
    {{0x8D, 0xA9, 0xC8},  3, 3650, 1},
    {{0x8D, 0xA9, 0xD5}, 17, 3653, 1},
    {{0x8D, 0xAA, 0xC0},  5, 3670, 1},
    {{0x8D, 0xAC, 0xC0},  1, 3675, 1},
    {{0x8D, 0xAE, 0xC0}, 40, 3676, 1},
    {{0x8D, 0xAE, 0xC1},  2, 3716, 1},
    {{0x8D, 0xAE, 0xC4}, 19, 3718, 1},
    {{0x8D, 0xAE, 0xC8},  1, 3737, 1},
    {{0x8D, 0xAE, 0xD5},  4, 3738, 1},
    {{0x8D, 0xB3, 0xC1},  1, 3742, 1},
    {{0x8D, 0xB3, 0xC8},  1, 3743, 1},
    {{0x8D, 0xB3, 0xD1},  3, 3744, 1},
    {{0x8D, 0xB3, 0xD5}, 11, 3747, 1},
    {{0x8D, 0xB5, 0xC0}, 34, 3758, 1},
    {{0x8D, 0xB5, 0xC1},  5, 3792, 1},
    {{0x8D, 0xB5, 0xC4}, 35, 3797, 1},
    {{0x8D, 0xB5, 0xC8}, 15, 3832, 1},
    {{0x8D, 0xB5, 0xD0},  2, 3847, 1},
    {{0x8D, 0xB5, 0xD1},  7, 3849, 1},
    {{0x8D, 0xB5, 0xD5},  3, 3856, 1},
    {{0x8F, 0xA1, 0xC0}, 15, 3859, 1},
    {{0x8F, 0xA1, 0xC1},  7, 3874, 1},
    {{0x8F, 0xA1, 0xC4}, 15, 3881, 1},
    {{0x8F, 0xA1, 0xC8},  5, 3896, 1},
    {{0x8F, 0xA1, 0xD0}, 10, 3901, 1},
    {{0x8F, 0xA1, 0xD5}, 22, 3911, 1},
    {{0x8F, 0xA2, 0xC0}, 12, 3933, 1},
    {{0x8F, 0xA2, 0xC1},  4, 3945, 1},
    {{0x8F, 0xA5, 0xC0},  4, 3949, 1},
    {{0x8F, 0xA5, 0xC1}, 15, 3953, 1},
    {{0x8F, 0xA5, 0xC4}, 19, 3968, 1},
    {{0x8F, 0xA5, 0xC8}, 10, 3987, 1},
    {{0x8F, 0xA5, 0xD0}, 10, 3997, 1},
    {{0x8F, 0xA5, 0xD1}, 10, 4007, 1},
    {{0x8F, 0xA5, 0xD5},  8, 4017, 1},
    {{0x8F, 0xA6, 0xC0}, 10, 4025, 1},
    {{0x8F, 0xA9, 0xC0}, 27, 4035, 1},
    {{0x8F, 0xA9, 0xC1},  6, 4062, 1},
    {{0x8F, 0xA9, 0xC4},  3, 4068, 1},
    {{0x8F, 0xA9, 0xD5}, 11, 4071, 1},
    {{0x8F, 0xAA, 0xC8},  1, 4082, 1},
    {{0x8F, 0xAC, 0xC0},  3, 4083, 1},
    {{0x8F, 0xAE, 0xC0}, 23, 4086, 1},
    {{0x8F, 0xAE, 0xC1}, 12, 4109, 1},
    {{0x8F, 0xAE, 0xC4},  3, 4121, 1},
    {{0x8F, 0xAE, 0xC8},  3, 4124, 1},
    {{0x8F, 0xAE, 0xD5},  6, 4127, 1},
    {{0x8F, 0xB0, 0xC0},  3, 4133, 1},
    {{0x8F, 0xB1, 0xC0}, 15, 4136, 1},
    {{0x8F, 0xB3, 0xC1},  5, 4151, 1},
    {{0x8F, 0xB3, 0xD5},  1, 4156, 1},
    {{0x8F, 0xB5, 0xC0}, 24, 4157, 1},
    {{0x8F, 0xB5, 0xC1},  3, 4181, 1},
    {{0x8F, 0xB5, 0xC4},  1, 4184, 1},
    {{0x8F, 0xB5, 0xC8},  3, 4185, 1},
    {{0x8F, 0xB5, 0xD0},  9, 4188, 1},
    {{0x8F, 0xB5, 0xD1},  1, 4197, 1},
    {{0x8F, 0xB5, 0xD5},  2, 4198, 1},
    {{0x90, 0xAB, 0xC0},  1, 4200, 1},
    {{0x91, 0xA1, 0xC0}, 14, 4201, 1},
    {{0x91, 0xA1, 0xC1}, 16, 4215, 1},
    {{0x91, 0xA1, 0xC4}, 10, 4231, 1},
    {{0x91, 0xA1, 0xC8},  2, 4241, 1},
    {{0x91, 0xA1, 0xD0},  4, 4243, 1},
    {{0x91, 0xA1, 0xD1},  3, 4247, 1},
    {{0x91, 0xA1, 0xD5},  5, 4250, 1},
    {{0x91, 0xA2, 0xC0}, 14, 4255, 1},
    {{0x91, 0xA2, 0xC1},  3, 4269, 1},
    {{0x91, 0xA2, 0xD5},  1, 4272, 1},
    {{0x91, 0xA5, 0xC0},  1, 4273, 1},
    {{0x91, 0xA9, 0xC0},  4, 4274, 1},
    {{0x91, 0xA9, 0xD5},  7, 4278, 1},
    {{0x91, 0xAC, 0xC0},  6, 4285, 1},
    {{0x91, 0xAE, 0xC0},  6, 4291, 1},
    {{0x91, 0xB3, 0xC1},  2, 4297, 1},
    {{0x91, 0xB3, 0xD0},  1, 4299, 1},
    {{0x92, 0xA1, 0xC0}, 16, 4300, 1},
    {{0x92, 0xA1, 0xC4},  9, 4316, 1},
    {{0x92, 0xA1, 0xC8},  3, 4325, 1},
    {{0x92, 0xA2, 0xC0}, 11, 4328, 1},
    {{0x92, 0xA2, 0xD5},  4, 4339, 1},
    {{0x92, 0xA3, 0xC1},  1, 4343, 1},
    {{0x92, 0xA7, 0xC4}, 10, 4344, 1},
    {{0x92, 0xA7, 0xD0},  1, 4354, 1},
    {{0x92, 0xA7, 0xD5},  5, 4355, 1},
    {{0x92, 0xA8, 0xC0}, 10, 4360, 1},
    {{0x92, 0xA9, 0xC0}, 28, 4370, 1},
    {{0x92, 0xA9, 0xC1},  6, 4398, 1},
    {{0x92, 0xAD, 0xC0}, 14, 4404, 1},
    {{0x92, 0xAE, 0xD0},  2, 4418, 1},
    {{0x92, 0xAE, 0xD5},  5, 4420, 1},
    {{0x92, 0xB5, 0xC0},  7, 4425, 1},
    {{0x92, 0xB5, 0xC8}, 10, 4432, 1},
    {{0x92, 0xB5, 0xD1},  2, 4442, 1},
    {{0x93, 0xA1, 0xC0}, 14, 4444, 1},
    {{0x93, 0xA1, 0xC1},  5, 4458, 1},
    {{0x93, 0xA1, 0xC4}, 14, 4463, 1},
    {{0x93, 0xA1, 0xC8},  2, 4477, 1},
    {{0x93, 0xA1, 0xD0}, 12, 4479, 1},
    {{0x93, 0xA1, 0xD1},  7, 4491, 1},
    {{0x93, 0xA1, 0xD5}, 17, 4498, 1},
    {{0x93, 0xA2, 0xC0}, 18, 4515, 1},
    {{0x93, 0xA2, 0xC1},  2, 4533, 1},
    {{0x93, 0xA2, 0xD5},  5, 4535, 1},
    {{0x93, 0xA3, 0xD5},  9, 4540, 1},
    {{0x93, 0xA5, 0xC0},  4, 4549, 1},
    {{0x93, 0xA5, 0xC4},  4, 4553, 1},
    {{0x93, 0xA5, 0xC8},  1, 4557, 1},
    {{0x93, 0xA5, 0xD0},  2, 4558, 1},
    {{0x93, 0xA7, 0xC1},  4, 4560, 1},
    {{0x93, 0xA7, 0xC4}, 21, 4564, 1},
    {{0x93, 0xA7, 0xC8},  4, 4585, 1},
    {{0x93, 0xA7, 0xD0},  1, 4589, 1},
    {{0x93, 0xA7, 0xD1}, 12, 4590, 1},
    {{0x93, 0xA7, 0xD5}, 20, 4602, 1},
    {{0x93, 0xA8, 0xC0},  9, 4622, 1},
    {{0x93, 0xA9, 0xC0}, 41, 4631, 1},
    {{0x93, 0xA9, 0xC1},  3, 4672, 1},
    {{0x93, 0xA9, 0xC4},  6, 4675, 1},
    {{0x93, 0xA9, 0xC8},  3, 4681, 1},
    {{0x93, 0xA9, 0xD5}, 10, 4684, 1},
    {{0x93, 0xAA, 0xC0}, 14, 4694, 1},
    {{0x93, 0xAA, 0xC1},  6, 4708, 1},
    {{0x93, 0xAA, 0xC4}, 17, 4714, 1},
    {{0x93, 0xAA, 0xC8},  5, 4731, 1},
    {{0x93, 0xAA, 0xD5}, 24, 4736, 1},
    {{0x93, 0xAC, 0xC0}, 20, 4760, 1},
    {{0x93, 0xAC, 0xC1},  2, 4780, 1},
    {{0x93, 0xAC, 0xD5},  3, 4782, 1},
    {{0x93, 0xAD, 0xC0}, 13, 4785, 1},
    {{0x93, 0xAE, 0xC0}, 13, 4798, 1},
    {{0x93, 0xAE, 0xC4}, 10, 4811, 1},
    {{0x93, 0xAE, 0xD5},  1, 4821, 1},
    {{0x93, 0xAF, 0xC4},  4, 4822, 1},
    {{0x93, 0xB0, 0xC0},  3, 4826, 1},
    {{0x93, 0xB1, 0xC0},  8, 4829, 1},
    {{0x93, 0xB2, 0xC0},  5, 4837, 1},
    {{0x93, 0xB2, 0xC8},  3, 4842, 1},
    {{0x93, 0xB2, 0xD5},  5, 4845, 1},
    {{0x93, 0xB3, 0xC1},  1, 4850, 1},
    {{0x93, 0xB3, 0xC4},  4, 4851, 1},
    {{0x93, 0xB3, 0xC8},  4, 4855, 1},
    {{0x93, 0xB3, 0xD0},  3, 4859, 1},
    {{0x93, 0xB3, 0xD1},  4, 4862, 1},
    {{0x93, 0xB3, 0xD5},  1, 4866, 1},
    {{0x93, 0xB4, 0xC0}, 20, 4867, 1},
    {{0x93, 0xB5, 0xC8},  1, 4887, 1},
};
