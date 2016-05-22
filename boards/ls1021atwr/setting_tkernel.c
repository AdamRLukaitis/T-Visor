#include "setting_tkernel.h"
#include "memory_define.h"
#include "page_table.h"


memory_area_t TK_MEMORY_AREAS_1[] = {
    {0x00000000, 0x01000000, 0x00000000, MEM_AREA_VNORMAL | MEM_AREA_VRO, 0 },
    {0x01000000, 0x10000000, 0x01000000, MEM_AREA_VDEV | MEM_AREA_VRW | (1 << 10), MEM_NO_EXEC},
    {0x01080000, 0x01090000, 0x01080000, MEM_AREA_VSTOR | MEM_AREA_VNO | (1 << 10), MEM_NO_EXEC}, // DDR
    {0x01400000, 0x01500000, 0x01400000, MEM_AREA_VDEV | MEM_AREA_VNO | (1 << 10), MEM_NO_EXEC},
    {0x01406000, 0x01408000, 0x01402000, MEM_AREA_VDEV | MEM_AREA_VRW | (1 << 10), MEM_NO_EXEC},
    {0x01401000, 0x01402000, 0x01401000, MEM_AREA_VDEV | MEM_AREA_VNO | (1 << 10), MEM_NO_EXEC},
    {0x80000000, 0x88000000, 0x80000000, MEM_AREA_VNORMAL | MEM_AREA_VRW | (1 << 10), 0 },
    {0x88000000, 0x90000000, 0x88000000, MEM_AREA_VNORMAL | MEM_AREA_VRW | (1 << 10), 0 },
};

UW TK_MEMORY_AREA_NUM_1 = sizeof(TK_MEMORY_AREAS_1)/sizeof(TK_MEMORY_AREAS_1[0]);

memory_area_t TK_MEMORY_AREAS_2[] = {
    {0x00000000, 0x01000000, 0x00000000, MEM_AREA_VNORMAL | MEM_AREA_VRO, 0 },
    {0x01000000, 0x10000000, 0x01000000, MEM_AREA_VDEV | MEM_AREA_VRW | (1 << 10), MEM_NO_EXEC},
    {0x01080000, 0x01090000, 0x01080000, MEM_AREA_VSTOR | MEM_AREA_VNO | (1 << 10), MEM_NO_EXEC}, // DDR
    {0x01400000, 0x01500000, 0x01400000, MEM_AREA_VDEV | MEM_AREA_VNO | (1 << 10), MEM_NO_EXEC},
    {0x01406000, 0x01408000, 0x01402000, MEM_AREA_VDEV | MEM_AREA_VRW | (1 << 10), MEM_NO_EXEC},
    {0x01401000, 0x01402000, 0x01401000, MEM_AREA_VDEV | MEM_AREA_VRO | (1 << 10), MEM_NO_EXEC},
    {0x90000000, 0x98000000, 0x80000000, MEM_AREA_VNORMAL | MEM_AREA_VRW | (1 << 10), 0 },
    {0x88000000, 0x90000000, 0x88000000, MEM_AREA_VNORMAL | MEM_AREA_VRW | (1 << 10), 0 },
};

UW TK_MEMORY_AREA_NUM_2 = sizeof(TK_MEMORY_AREAS_2)/sizeof(TK_MEMORY_AREAS_2[0]);
