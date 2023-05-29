#include "registers.h"

//////////////////////////////////
//
//	   512 BITS REGISTERS
//
/////////////////////////////////

const reg_t	*get_rzmm(size_t *len)
{
	static const reg_t	rzmm[RZMM_SIZE] = {
		{ REG_STR("ZMM0"), R512_ZMM0, ZWORD, R512 },
		{ REG_STR("ZMM1"), R512_ZMM1, ZWORD, R512 },
		{ REG_STR("ZMM2"), R512_ZMM2, ZWORD, R512 },
		{ REG_STR("ZMM3"), R512_ZMM3, ZWORD, R512 },
		{ REG_STR("ZMM4"), R512_ZMM4, ZWORD, R512 },
		{ REG_STR("ZMM5"), R512_ZMM5, ZWORD, R512 },
		{ REG_STR("ZMM6"), R512_ZMM6, ZWORD, R512 },
		{ REG_STR("ZMM7"), R512_ZMM7, ZWORD, R512 },
	};

	if (len)
		*len = sizeof(rzmm)/sizeof(reg_t);

	return (rzmm);
}

const reg_t	*get_rzmmrex(size_t *len)
{
	static const reg_t rzmmrex[RZMMREX_SIZE] = {
		{ REG_STR("ZMM0"), R512_ZMM0, ZWORD, R512 | REX},
		{ REG_STR("ZMM1"), R512_ZMM1, ZWORD, R512 | REX},
		{ REG_STR("ZMM2"), R512_ZMM2, ZWORD, R512 | REX},
		{ REG_STR("ZMM3"), R512_ZMM3, ZWORD, R512 | REX},
		{ REG_STR("ZMM4"), R512_ZMM4, ZWORD, R512 | REX},
		{ REG_STR("ZMM5"), R512_ZMM5, ZWORD, R512 | REX},
		{ REG_STR("ZMM6"), R512_ZMM6, ZWORD, R512 | REX},
		{ REG_STR("ZMM7"), R512_ZMM7, ZWORD, R512 | REX},
		{ REG_STR("ZMM8"), R512_ZMM8, ZWORD, R512 | REX},
		{ REG_STR("ZMM9"), R512_ZMM9, ZWORD, R512 | REX},
		{ REG_STR("ZMM10"), R512_ZMM10, ZWORD, R512 | REX},
		{ REG_STR("ZMM11"), R512_ZMM11, ZWORD, R512 | REX},
		{ REG_STR("ZMM12"), R512_ZMM12, ZWORD, R512 | REX},
		{ REG_STR("ZMM13"), R512_ZMM13, ZWORD, R512 | REX},
		{ REG_STR("ZMM14"), R512_ZMM14, ZWORD, R512 | REX},
		{ REG_STR("ZMM15"), R512_ZMM15, ZWORD, R512 | REX}
	};

	if (len) *len = sizeof(rzmmrex)/sizeof(reg_t);
	return (rzmmrex);
}
