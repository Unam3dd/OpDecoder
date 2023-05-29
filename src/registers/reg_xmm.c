#include "registers.h"

//////////////////////////////////
//
//	   128 BITS REGISTERS
//
/////////////////////////////////

const reg_t	*get_rxmm(size_t *len)
{
	static const reg_t	rxmm[RXMM_SIZE] = {
		{ REG_STR("XMM0"), R128_XMM0, XWORD, R128 },
		{ REG_STR("XMM1"), R128_XMM1, XWORD, R128 },
		{ REG_STR("XMM2"), R128_XMM2, XWORD, R128 },
		{ REG_STR("XMM3"), R128_XMM3, XWORD, R128 },
		{ REG_STR("XMM4"), R128_XMM4, XWORD, R128 },
		{ REG_STR("XMM5"), R128_XMM5, XWORD, R128 },
		{ REG_STR("XMM6"), R128_XMM6, XWORD, R128 },
		{ REG_STR("XMM7"), R128_XMM7, XWORD, R128 },
	};

	if (len)
		*len = sizeof(rxmm)/sizeof(reg_t);

	return (rxmm);
}

const reg_t	*get_rxmmrex(size_t *len)
{
	static const reg_t rxmmrex[RXMMREX_SIZE] = {
		{ REG_STR("XMM0"), R128_XMM0, XWORD, R128 | REX},
		{ REG_STR("XMM1"), R128_XMM1, XWORD, R128 | REX},
		{ REG_STR("XMM2"), R128_XMM2, XWORD, R128 | REX},
		{ REG_STR("XMM3"), R128_XMM3, XWORD, R128 | REX},
		{ REG_STR("XMM4"), R128_XMM4, XWORD, R128 | REX},
		{ REG_STR("XMM5"), R128_XMM5, XWORD, R128 | REX},
		{ REG_STR("XMM6"), R128_XMM6, XWORD, R128 | REX},
		{ REG_STR("XMM7"), R128_XMM7, XWORD, R128 | REX},
		{ REG_STR("XMM8"), R128_XMM8, XWORD, R128 | REX},
		{ REG_STR("XMM9"), R128_XMM9, XWORD, R128 | REX},
		{ REG_STR("XMM10"), R128_XMM10, XWORD, R128 | REX},
		{ REG_STR("XMM11"), R128_XMM11, XWORD, R128 | REX},
		{ REG_STR("XMM12"), R128_XMM12, XWORD, R128 | REX},
		{ REG_STR("XMM13"), R128_XMM13, XWORD, R128 | REX},
		{ REG_STR("XMM14"), R128_XMM14, XWORD, R128 | REX},
		{ REG_STR("XMM15"), R128_XMM15, XWORD, R128 | REX}
	};

	if (len) *len = sizeof(rxmmrex)/sizeof(reg_t);
	return (rxmmrex);
}
