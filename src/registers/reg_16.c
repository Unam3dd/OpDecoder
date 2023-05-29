#include "registers.h"

//////////////////////////////////
//
//	   REGISTERS 16 Bits
//
/////////////////////////////////

const reg_t	*get_r16(size_t *len)
{
	static const reg_t	r16[R16_SIZE] = {
		{ REG_STR("AX"), R16_AX, WORD, R16 },
		{ REG_STR("CX"), R16_CX, WORD, R16 },
		{ REG_STR("DX"), R16_DX, WORD, R16 },
		{ REG_STR("BX"), R16_BX, WORD, R16 },
		{ REG_STR("SP"), R16_SP, WORD, R16 },
		{ REG_STR("BP"), R16_BP, WORD, R16 },
		{ REG_STR("SI"), R16_SI, WORD, R16 },
		{ REG_STR("DI"), R16_DI, WORD, R16 }
	};

	if (len) *len = sizeof(r16)/sizeof(reg_t);

	return (r16);
}


//////////////////////////////////
//
//	      REGISTERS 16 Bits
//	      Rex Prefix Extension
//
/////////////////////////////////

const reg_t	*get_r16rex(size_t *len)
{
	static const reg_t	r16rex[R16REX_SIZE] = {
		{ REG_STR("AX"), R16REX_AX, WORD, R16 | REX },
		{ REG_STR("CX"), R16REX_CX, WORD, R16 | REX },
		{ REG_STR("DX"), R16REX_DX, WORD, R16 | REX },
		{ REG_STR("BX"), R16REX_BX, WORD, R16 | REX },
		{ REG_STR("SP"), R16REX_SP, WORD, R16 | REX },
		{ REG_STR("BP"), R16REX_BP, WORD, R16 | REX },
		{ REG_STR("SI"), R16REX_SI, WORD, R16 | REX },
		{ REG_STR("DI"), R16REX_DI, WORD, R16 | REX },
		{ REG_STR("R8W"), R16REX_R8W, WORD, R16 | REX },
		{ REG_STR("R9W"), R16REX_R9W, WORD, R16 | REX },
		{ REG_STR("R10W"), R16REX_R10W, WORD, R16 | REX },
		{ REG_STR("R11W"), R16REX_R11W, WORD, R16 | REX },
		{ REG_STR("R12W"), R16REX_R12W, WORD, R16 | REX },
		{ REG_STR("R13W"), R16REX_R13W, WORD, R16 | REX },
		{ REG_STR("R14W"), R16REX_R14W, WORD, R16 | REX },
		{ REG_STR("R15W"), R16REX_R15W, WORD, R16 | REX },
	};

	if (len) *len = sizeof(r16rex)/sizeof(reg_t);

	return (r16rex);
}
