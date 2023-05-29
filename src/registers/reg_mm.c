#include "registers.h"

//////////////////////////////////
//
//	  MEDIA REGISTERS 64 Bits
//
/////////////////////////////////

const reg_t	*get_rmm(size_t *len)
{
	static const reg_t	rmm[RMM_SIZE] = {
		{ REG_STR("MM0"), R64_MM0, QWORD, R64 },
		{ REG_STR("MM1"), R64_MM1, QWORD, R64 },
		{ REG_STR("MM2"), R64_MM2, QWORD, R64 },
		{ REG_STR("MM3"), R64_MM3, QWORD, R64 },
		{ REG_STR("MM4"), R64_MM4, QWORD, R64 },
		{ REG_STR("MM5"), R64_MM5, QWORD, R64 },
		{ REG_STR("MM6"), R64_MM6, QWORD, R64 },
		{ REG_STR("MM7"), R64_MM7, QWORD, R64 }
	};

	if (len) *len = sizeof(rmm)/sizeof(reg_t);

	return (rmm);
}

const reg_t	*get_rmmrex(size_t *len)
{
	static const reg_t	rmm[RMMREX_SIZE] = {
		{ REG_STR("MM0"), R64_MM0, QWORD, R64 	 | REX},
		{ REG_STR("MM1"), R64_MM1, QWORD, R64 	 | REX},
		{ REG_STR("MM2"), R64_MM2, QWORD, R64 	 | REX},
		{ REG_STR("MM3"), R64_MM3, QWORD, R64 	 | REX},
		{ REG_STR("MM4"), R64_MM4, QWORD, R64 	 | REX},
		{ REG_STR("MM5"), R64_MM5, QWORD, R64 	 | REX},
		{ REG_STR("MM6"), R64_MM6, QWORD, R64	 | REX},
		{ REG_STR("MM7"), R64_MM7, QWORD, R64 	 | REX},
		{ REG_STR("MM0"), R64REX_MM0, QWORD, R64 | REX},
		{ REG_STR("MM1"), R64REX_MM1, QWORD, R64 | REX},
		{ REG_STR("MM2"), R64REX_MM2, QWORD, R64 | REX},
		{ REG_STR("MM3"), R64REX_MM3, QWORD, R64 | REX},
		{ REG_STR("MM4"), R64REX_MM4, QWORD, R64 | REX},
		{ REG_STR("MM5"), R64REX_MM5, QWORD, R64 | REX},
		{ REG_STR("MM6"), R64REX_MM6, QWORD, R64 | REX},
		{ REG_STR("MM7"), R64REX_MM7, QWORD, R64 | REX}
	};

	if (len) *len = sizeof(rmm)/sizeof(reg_t);

	return (rmm);
}
