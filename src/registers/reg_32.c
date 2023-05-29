#include "registers.h"

//////////////////////////////////
//
//	   REGISTERS 32 BITS
//
/////////////////////////////////

const reg_t	*get_r32(size_t *len)
{
	static const reg_t	r32[R32_SIZE] = {
		{ REG_STR("EAX"), R32_EAX, DWORD, R32 },
		{ REG_STR("ECX"), R32_ECX, DWORD, R32 },
		{ REG_STR("EDX"), R32_EDX, DWORD, R32 },
		{ REG_STR("EBX"), R32_ECX, DWORD, R32 },
		{ REG_STR("ESP"), R32_ESP, DWORD, R32 },
		{ REG_STR("EBP"), R32_EBP, DWORD, R32 },
		{ REG_STR("ESI"), R32_ESI, DWORD, R32 },
		{ REG_STR("EDI"), R32_EDI, DWORD, R32 }
	};

	if (len) *len = sizeof(r32)/sizeof(reg_t);

	return (r32);
}

const reg_t	*get_r32rex(size_t *len)
{
	static const reg_t	r32[R32REX_SIZE] = {
		{ REG_STR("EAX"),  R32REX_EAX,  DWORD, R32 | REX },
		{ REG_STR("ECX"),  R32REX_ECX,  DWORD, R32 | REX },
		{ REG_STR("EDX"),  R32REX_EDX,  DWORD, R32 | REX },
		{ REG_STR("EBX"),  R32REX_EBX,  DWORD, R32 | REX },
		{ REG_STR("ESP"),  R32REX_ESP,  DWORD, R32 | REX },
		{ REG_STR("EBP"),  R32REX_EBP,  DWORD, R32 | REX },
		{ REG_STR("ESI"),  R32REX_ESI,  DWORD, R32 | REX },
		{ REG_STR("EDI"),  R32REX_EDI,  DWORD, R32 | REX },
		{ REG_STR("R8D"),  R32REX_R8D,  DWORD, R32 | REX },
		{ REG_STR("R9D"),  R32REX_R9D,  DWORD, R32 | REX },
		{ REG_STR("R10D"), R32REX_R10D, DWORD, R32 | REX},
		{ REG_STR("R11D"), R32REX_R11D, DWORD, R32 | REX},
		{ REG_STR("R12D"), R32REX_R12D, DWORD, R32 | REX},
		{ REG_STR("R13D"), R32REX_R13D, DWORD, R32 | REX},
		{ REG_STR("R14D"), R32REX_R14D, DWORD, R32 | REX},
		{ REG_STR("R15D"), R32REX_R15D, DWORD, R32 | REX}
	};

	if (len) *len = sizeof(r32)/sizeof(reg_t);

	return (r32);
}
