#include "registers.h"

//////////////////////////////////
//
//	   256 BITS REGISTERS
//
/////////////////////////////////

const reg_t	*get_rymm(size_t *len)
{
	static const reg_t	rymm[RYMM_SIZE] = {
		{ REG_STR("YMM0"), R256_YMM0, YWORD, R256 },
		{ REG_STR("YMM1"), R256_YMM1, YWORD, R256 },
		{ REG_STR("YMM2"), R256_YMM2, YWORD, R256 },
		{ REG_STR("YMM3"), R256_YMM3, YWORD, R256 },
		{ REG_STR("YMM4"), R256_YMM4, YWORD, R256 },
		{ REG_STR("YMM5"), R256_YMM5, YWORD, R256 },
		{ REG_STR("YMM6"), R256_YMM6, YWORD, R256 },
		{ REG_STR("YMM7"), R256_YMM7, YWORD, R256 },
	};

	if (len)
		*len = sizeof(rymm)/sizeof(reg_t);

	return (rymm);
}

const reg_t	*get_rymmrex(size_t *len)
{
	static const reg_t rymmrex[RYMMREX_SIZE] = {
		{ REG_STR("YMM0"), R256_YMM0, YWORD, R256 | REX},
		{ REG_STR("YMM1"), R256_YMM1, YWORD, R256 | REX},
		{ REG_STR("YMM2"), R256_YMM2, YWORD, R256 | REX},
		{ REG_STR("YMM3"), R256_YMM3, YWORD, R256 | REX},
		{ REG_STR("YMM4"), R256_YMM4, YWORD, R256 | REX},
		{ REG_STR("YMM5"), R256_YMM5, YWORD, R256 | REX},
		{ REG_STR("YMM6"), R256_YMM6, YWORD, R256 | REX},
		{ REG_STR("YMM7"), R256_YMM7, YWORD, R256 | REX},
		{ REG_STR("YMM8"), R256_YMM8, YWORD, R256 | REX},
		{ REG_STR("YMM9"), R256_YMM9, YWORD, R256 | REX},
		{ REG_STR("YMM10"), R256_YMM10, YWORD, R256 | REX},
		{ REG_STR("YMM11"), R256_YMM11, YWORD, R256 | REX},
		{ REG_STR("YMM12"), R256_YMM12, YWORD, R256 | REX},
		{ REG_STR("YMM13"), R256_YMM13, YWORD, R256 | REX},
		{ REG_STR("YMM14"), R256_YMM14, YWORD, R256 | REX},
		{ REG_STR("YMM15"), R256_YMM15, YWORD, R256 | REX}
	};

	if (len) *len = sizeof(rymmrex)/sizeof(reg_t);
	return (rymmrex);
}
