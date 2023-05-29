#include "registers.h"

//////////////////////////////////
//
//	      REGISTERS 8 Bits
//
/////////////////////////////////

const reg_t	*get_r8(size_t *len)
{
	static const reg_t	r8[R8_SIZE] = {
		{ REG_STR("AL"), R8_AL, BYTE, R8 },
		{ REG_STR("CL"), R8_CL, BYTE, R8 },
		{ REG_STR("DL"), R8_DL, BYTE, R8 },
		{ REG_STR("BL"), R8_BL, BYTE, R8 },
		{ REG_STR("AH"), R8_AH, BYTE, R8 },
		{ REG_STR("CH"), R8_CH, BYTE, R8 },
		{ REG_STR("DH"), R8_DH, BYTE, R8 },
		{ REG_STR("BH"), R8_BH, BYTE, R8 }
	};

	if (len) *len = sizeof(r8)/sizeof(reg_t);

	return (r8);
}

//////////////////////////////////
//
//	 REGISTERS 8 Bits
//	   Rex Extension
//
/////////////////////////////////

const reg_t	*get_r8rex(size_t *len)
{
	static const reg_t	r8[R8REX_SIZE] = {
		{ REG_STR("AL"),   R8REX_AL, BYTE,   R8	| REX 	},
		{ REG_STR("CL"),   R8REX_CL, BYTE,   R8	| REX	},
		{ REG_STR("DL"),   R8REX_DL, BYTE,   R8	| REX	},
		{ REG_STR("BL"),   R8REX_BL, BYTE,   R8	| REX	},
		{ REG_STR("SPL"),  R8REX_SPL, BYTE,  R8	| REX	},
		{ REG_STR("BPL"),  R8REX_BPL, BYTE,  R8	| REX	},
		{ REG_STR("SIL"),  R8REX_SIL, BYTE,  R8	| REX	},
		{ REG_STR("DIL"),  R8REX_DIL, BYTE,  R8	| REX	},
	    { REG_STR("R8B"),  R8REX_R8B, BYTE,  R8 | REX 	},
		{ REG_STR("R9B"),  R8REX_R9B, BYTE,  R8 | REX	},
		{ REG_STR("R10B"), R8REX_R10B, BYTE, R8 | REX	},
		{ REG_STR("R11B"), R8REX_R11B, BYTE, R8 | REX	},
		{ REG_STR("R12B"), R8REX_R12B, BYTE, R8 | REX	},
		{ REG_STR("R13B"), R8REX_R13B, BYTE, R8 | REX	},
		{ REG_STR("R14B"), R8REX_R14B, BYTE, R8 | REX	},
		{ REG_STR("R15B"), R8REX_R15B, BYTE, R8 | REX	}
	};
	
	if (len) *len = sizeof(r8)/sizeof(reg_t);

	return (r8);
}
