#include "registers.h"

//////////////////////////////////
//
//	16 bits Control Registers	       
//
/////////////////////////////////

const reg_t	*get_rcr(size_t *len)
{
	static const reg_t	rcr[RCR_SIZE] = {
		{ REG_STR("CR0"), R16_CR0, WORD, R16 | RCR },
		{ NULL, INVALID, SIZE_INVALID, FLAG_INVALID },
		{ REG_STR("CR2"), R16_CR2, WORD, R16 | RCR },
		{ REG_STR("CR3"), R16_CR3, WORD, R16 | RCR },
		{ REG_STR("CR4"), R16_CR4, WORD, R16 | RCR },
		{ REG_STR("CR8"), R16_CR8, WORD, R16 | RCR }
	};

	if (len) *len = sizeof(rcr)/sizeof(reg_t);
	return (rcr);
}
