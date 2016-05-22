#include "memory_define.h"
#include "page_table.h"
#include "setting_linux_boot.h"
#include "board.h"

memory_area_t MemArea[] = {
    {0x00000000, 0x01000000, 0x00000000, MEM_AREA_VNORMAL | MEM_AREA_VRO | (1 << 10), 0 },
    {0x01000000, 0x10000000, 0x01000000, MEM_AREA_VDEV | MEM_AREA_VRW | (1 << 10), MEM_NO_EXEC},
    {0x01080000, 0x01090000, 0x01080000, MEM_AREA_VSTOR | MEM_AREA_VNO | (1 << 10), MEM_NO_EXEC}, // DDR
    {0x01ee0000, 0x01ee3000, 0x01ee0000, MEM_AREA_VSTOR | MEM_AREA_VRW | (1 << 10), MEM_NO_EXEC},
    {0x01400000, 0x01500000, 0x01400000, MEM_AREA_VDEV | MEM_AREA_VNO | (1 << 10), MEM_NO_EXEC},
    {GICV_BASE_ADDR, GICV_BASE_ADDR+0x2000, GICC_BASE_ADDR, MEM_AREA_VDEV | MEM_AREA_VRW | (1 << 10), MEM_NO_EXEC},
    {GICD_BASE_ADDR, GICD_BASE_ADDR+0x1000, GICD_BASE_ADDR, MEM_AREA_VDEV | MEM_AREA_VNO | (1 << 10), MEM_NO_EXEC},
    {0x02ad0000, 0x02af0000, 0x02ad0000, MEM_AREA_VSTOR | MEM_AREA_VRW | (1 << 10), 0 },
    {0x60000000, 0x7fb00000, 0x60000000, MEM_AREA_VSTOR | MEM_AREA_VRW | (1 << 10), 0 },
    {0x7fb00000, 0x80000000, 0x7fb00000, MEM_AREA_VSTOR | MEM_AREA_VRO | (1 << 10), 0 },
    {0x10000000, 0x10020000, 0x10000000, MEM_AREA_VNORMAL | MEM_AREA_VRW | (1 << 10), MEM_NO_EXEC },
    {0x80000000, 0xa0000000, 0x80000000, MEM_AREA_VNORMAL | MEM_AREA_VRW | (1 << 10) | (0x3 << 8), 0 }
};

UW MemAreaNum = sizeof(MemArea)/sizeof(MemArea[0]);
