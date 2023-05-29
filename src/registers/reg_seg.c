#include "registers.h"

const reg_t	*get_rseg(size_t *len)
{
	static const reg_t	rseg[RSEG_SIZE] = {
		{ REG_STR("ES"), R16_ES, WORD, R16 | RSEG },
		{ REG_STR("CS"), R16_CS, WORD, R16 | RSEG },
		{ REG_STR("SS"), R16_SS, WORD, R16 | RSEG },
		{ REG_STR("DS"), R16_DS, WORD, R16 | RSEG },
		{ REG_STR("FS"), R16_FS, WORD, R16 | RSEG },
		{ REG_STR("GS"), R16_GS, WORD, R16 | RSEG }
	};

	if (len) *len = sizeof(rseg)/sizeof(reg_t);
	return (rseg);
}
