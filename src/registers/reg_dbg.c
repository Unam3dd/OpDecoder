#include "registers.h"

//////////////////////////////////
//
//	 Debug Registers 16 Bits
//
/////////////////////////////////

const reg_t	*get_rdbg(size_t *len)
{
	static const reg_t	rdbg[RDBG_SIZE] = {
		{ REG_STR("DR0"), R16_DR0, WORD, R16 | RDBG },
		{ REG_STR("DR1"), R16_DR1, WORD, R16 | RDBG },
		{ REG_STR("DR2"), R16_DR2, WORD, R16 | RDBG },
		{ REG_STR("DR3"), R16_DR3, WORD, R16 | RDBG },
		{ REG_STR("DR4"), R16_DR4, WORD, R16 | RDBG },
		{ REG_STR("DR5"), R16_DR5, WORD, R16 | RDBG },
		{ REG_STR("DR6"), R16_DR6, WORD, R16 | RDBG },
		{ REG_STR("DR7"), R16_DR7, WORD, R16 | RDBG }
	};

	if (len) *len = sizeof(rdbg)/sizeof(reg_t);

	return (rdbg);
}
