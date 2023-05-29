#include "registers.h"

//////////////////////////////////
//
//	       REGISTERS FPU
//
/////////////////////////////////

const reg_t	*get_rfpu(size_t *len)
{
	static const reg_t	rfpu[RFPU_SIZE] = {
		{ REG_STR("ST0"), R80_ST0, TWORD, R80 | RFPU },
		{ REG_STR("ST1"), R80_ST1, TWORD, R80 | RFPU },
		{ REG_STR("ST2"), R80_ST2, TWORD, R80 | RFPU },
		{ REG_STR("ST3"), R80_ST3, TWORD, R80 | RFPU },
		{ REG_STR("ST4"), R80_ST4, TWORD, R80 | RFPU },
		{ REG_STR("ST5"), R80_ST5, TWORD, R80 | RFPU },
		{ REG_STR("ST6"), R80_ST6, TWORD, R80 | RFPU },
		{ REG_STR("ST7"), R80_ST7, TWORD, R80 | RFPU }
	};

	if (len) *len = sizeof(rfpu)/sizeof(reg_t);
	return (rfpu);
}
