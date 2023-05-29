#include "registers.h"

//////////////////////////////////
//
//	   REGISTERS 64 Bits
//
/////////////////////////////////

const reg_t	*get_r64(size_t *len)
{
	static const reg_t	r64[R64_SIZE] = {
		{ REG_STR("RAX"), R64_RAX, QWORD, R64 },
		{ REG_STR("RCX"), R64_RCX, QWORD, R64 },
		{ REG_STR("RDX"), R64_RDX, QWORD, R64 },
		{ REG_STR("RBX"), R64_RBX, QWORD, R64 },
		{ REG_STR("RSP"), R64_RSP, QWORD, R64 },
		{ REG_STR("RBP"), R64_RBP, QWORD, R64 },
		{ REG_STR("RSI"), R64_RSI, QWORD, R64 },
		{ REG_STR("RDI"), R64_RDI, QWORD, R64 }
	};

	if (len) *len = sizeof(r64)/sizeof(reg_t);

	return (r64);
}

const reg_t	*get_r64rex(size_t *len)
{
	static const reg_t	r64[R64REX_SIZE] = {
		{ REG_STR("RAX"), R64_RAX, QWORD, R64 | REX },
		{ REG_STR("RCX"), R64_RCX, QWORD, R64 | REX },
		{ REG_STR("RDX"), R64_RDX, QWORD, R64 | REX },
		{ REG_STR("RBX"), R64_RBX, QWORD, R64 | REX },
		{ REG_STR("RSP"), R64_RSP, QWORD, R64 | REX },
		{ REG_STR("RBP"), R64_RBP, QWORD, R64 | REX },
		{ REG_STR("RSI"), R64_RSI, QWORD, R64 | REX },
		{ REG_STR("RDI"), R64_RDI, QWORD, R64 | REX },
		{ REG_STR("R8"), R64_R8, QWORD, R64 | REX	},
		{ REG_STR("R9"), R64_R9, QWORD, R64 | REX	},
		{ REG_STR("R10"), R64_R10, QWORD, R64 | REX },
		{ REG_STR("R11"), R64_R11, QWORD, R64 | REX },
		{ REG_STR("R12"), R64_R12, QWORD, R64 | REX },
		{ REG_STR("R13"), R64_R13, QWORD, R64 | REX },
		{ REG_STR("R14"), R64_R14, QWORD, R64 | REX },
		{ REG_STR("R15"), R64_R15, QWORD, R64 | REX }
	};

	if (len) *len = sizeof(r64)/sizeof(reg_t);

	return (r64);
}
