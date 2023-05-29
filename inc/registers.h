#ifndef REGISTERS_H
#define REGISTERS_H

//////////////////////////////////
//
//	       INCLUDES
//
/////////////////////////////////

#include "types.h"

/////////////////////////////
//
//			MACROS
//
/////////////////////////////

#define SIZE_BITS(b) (b << 3)
#define SIZE_BYTES(b) (b >> 3)
#define REG_STR(str) ((unsigned char *)str)

//////////////////////////////////
//
//	       TYPEDEFS
//
/////////////////////////////////

typedef enum reg8_t			reg8_t;
typedef enum reg8rex_t		reg8rex_t;
typedef enum reg16_t		reg16_t;
typedef enum reg16rex_t		reg16rex_t;
typedef enum reg32_t		reg32_t;
typedef enum reg32rex_t		reg32rex_t;
typedef enum reg64_t		reg64_t;
typedef enum regmm_t		regmm_t;
typedef enum regfpu_t		regfpu_t;
typedef enum regxmm_t		regxmm_t;
typedef enum regymm_t		regymm_t;
typedef enum regzmm_t		regzmm_t;
typedef enum regseg_t		regseg_t;
typedef enum regcr_t		regcr_t;
typedef enum regdbg_t		regdbg_t;
typedef enum reg_flags_t	reg_flags_t;
typedef enum reg_size_t		reg_size_t;

typedef regmm_t			regmm64_t;
typedef regxmm_t		regxmm128_t;
typedef regseg_t		regseg16_t;
typedef regcr_t			regcr16_t;
typedef regdbg_t		regdbg16_t;
typedef unsigned char*	reg_name_t;
typedef unsigned int	reg_index_t;

typedef struct reg_t reg_t;

//////////////////////////////////
//
//	       ENUM
//
/////////////////////////////////

// 8 bits registers
enum reg8_t
{
	R8_AL,	// A Low part register
	R8_CL,
	R8_DL,
	R8_BL,
	R8_AH,	// A High part register
	R8_CH,
	R8_DH,
	R8_BH
};

// 8 bits registers with rex mode
enum reg8rex_t
{
	R8REX_AL,
	R8REX_CL,
	R8REX_DL,
	R8REX_BL,
	R8REX_SPL,
	R8REX_BPL,
	R8REX_SIL,
	R8REX_DIL,
	R8REX_R8B = 0,
	R8REX_R9B,
	R8REX_R10B,
	R8REX_R11B,
	R8REX_R12B,
	R8REX_R13B,
	R8REX_R14B,
	R8REX_R15B
};

// 16 bits registers
enum reg16_t
{
	R16_AX,
	R16_CX,
	R16_DX,
	R16_BX,
	R16_SP,
	R16_BP,
	R16_SI,
	R16_DI
};

// 16 bits registers with rex mode
enum reg16rex_t
{
	R16REX_AX,
	R16REX_CX,
	R16REX_DX,
	R16REX_BX,
	R16REX_SP,
	R16REX_BP,
	R16REX_SI,
	R16REX_DI,
	R16REX_R8W = 0,
	R16REX_R9W,
	R16REX_R10W,
	R16REX_R11W,
	R16REX_R12W,
	R16REX_R13W,
	R16REX_R14W,
	R16REX_R15W
};

// 32 bits Extened registers
enum reg32_t
{
	R32_EAX,
	R32_ECX,
	R32_EDX,
	R32_EBX,
	R32_ESP,
	R32_EBP,
	R32_ESI,
	R32_EDI
};

// 32 bits Extented registers with REX mode
enum reg32rex_t
{
	R32REX_EAX,
	R32REX_ECX,
	R32REX_EDX,
	R32REX_EBX,
	R32REX_ESP,
	R32REX_EBP,
	R32REX_ESI,
	R32REX_EDI,
	R32REX_R8D = 0,
	R32REX_R9D,
	R32REX_R10D,
	R32REX_R11D,
	R32REX_R12D,
	R32REX_R13D,
	R32REX_R14D,
	R32REX_R15D
};

// 64 bits Registers aka REX registers
enum reg64_t
{
	R64_RAX,
	R64_RCX,
	R64_RDX,
	R64_RBX,
	R64_RSP,
	R64_RBP,
	R64_RSI,
	R64_RDI,
	R64_R8 = 0,
	R64_R9,
	R64_R10,
	R64_R11,
	R64_R12,
	R64_R13,
	R64_R14,
	R64_R15
};

// Media registers (SIMD - MMX Extension)
enum regmm_t
{
	R64_MM0,
	R64_MM1,
	R64_MM2,
	R64_MM3,
	R64_MM4,
	R64_MM5,
	R64_MM6,
	R64_MM7,
	R64REX_MM0 = 0,
	R64REX_MM1,
	R64REX_MM2,
	R64REX_MM3,
	R64REX_MM4,
	R64REX_MM5,
	R64REX_MM6,
	R64REX_MM7
};

// Floating point stack registers (FPU - Extension)
enum regfpu_t
{
	R80_ST0,
	R80_ST1,
	R80_ST2,
	R80_ST3,
	R80_ST4,
	R80_ST5,
	R80_ST6,
	R80_ST7
};

// 128 Bits registers (SIMD - SSE Extension)
enum regxmm_t
{
	R128_XMM0,
	R128_XMM1,
	R128_XMM2,
	R128_XMM3,
	R128_XMM4,
	R128_XMM5,
	R128_XMM6,
	R128_XMM7,
	R128_XMM8 = 0,
	R128_XMM9,
	R128_XMM10,
	R128_XMM11,
	R128_XMM12,
	R128_XMM13,
	R128_XMM14,
	R128_XMM15
};

// 256 Bits registers (SIMD - AVX/AVX2 Extension)
enum regymm_t
{
	R256_YMM0,
	R256_YMM1,
	R256_YMM2,
	R256_YMM3,
	R256_YMM4,
	R256_YMM5,
	R256_YMM6,
	R256_YMM7,
	R256_YMM8 = 0,
	R256_YMM9,
	R256_YMM10,
	R256_YMM11,
	R256_YMM12,
	R256_YMM13,
	R256_YMM14,
	R256_YMM15
};

// 512 Bits registers (SIMD - AVX512 Extension)
enum regzmm_t
{
	R512_ZMM0,
	R512_ZMM1,
	R512_ZMM2,
	R512_ZMM3,
	R512_ZMM4,
	R512_ZMM5,
	R512_ZMM6,
	R512_ZMM7,
	R512_ZMM8 = 0,
	R512_ZMM9,
	R512_ZMM10,
	R512_ZMM11,
	R512_ZMM12,
	R512_ZMM13,
	R512_ZMM14,
	R512_ZMM15
};

// Segment registers
enum regseg_t
{
	R16_ES,
	R16_CS,
	R16_SS,
	R16_DS,
	R16_FS,
	R16_GS
};

// Control registers
enum regcr_t
{
	R16_CR0,
	R16_CR2 = 2,
	R16_CR3,
	R16_CR4,
	R16_CR8 = 0
};

// Debug registers
enum regdbg_t
{
	R16_DR0,
	R16_DR1,
	R16_DR2,
	R16_DR3,
	R16_DR4,
	R16_DR5,
	R16_DR6,
	R16_DR7
};

// Registers flags
enum reg_flags_t
{
	R8 = 1 << 0,
	R16 = 1 << 1,
	R32 = 1 << 2,
	R64 = 1 << 3,
	R128 = 1 << 4,
	RXMM = 1 << 4,
	R256 = 1 << 5,
	RYMM = 1 << 5,
	R512 = 1 << 6,
	RZMM = 1 << 6,
	RSEG = 1 << 7,
	RCR = 1 << 8,
	RDBG = 1 << 9,
	REX = 1 << 10
};

enum reg_size_t
{
	BYTE 	= 1 << 0,
	WORD 	= 1 << 1,
	DWORD 	= 1 << 2,
	FWORD 	= 0x30,
	PWORD 	= 0x30,
	QWORD 	= 1 << 3,
	TBYTE 	= 0xA,
	TWORD 	= 0xA,
	DQWORD 	= 1 << 4,
	XWORD 	= 1 << 4,
	QQWORD	= 1 << 5,
	YWORD	= 1 << 5,
	DQQWORD	= 1 << 6,
	ZWORD	= 1 << 6
};

//////////////////////////////////
//
//	       STRUCT
//
/////////////////////////////////

struct reg_t
{
	reg_name_t	name;	// Register name
	reg_index_t	index;	// Register index [0-7]
	reg_size_t	size;	// Register size in bytes
	reg_flags_t	flags;	// Register flags
};

//////////////////////////////////
//
//	       DEFINES
//
/////////////////////////////////

#define R8_SIZE	0x8
#define R8REX_SIZE 0x10

#define R16_SIZE 0x8
#define R16REX_SIZE 0x10

#define R32_SIZE 0x8
#define R32REX_SIZE 0x10

//////////////////////////////////
//
//	    REGISTERS LOOKUP TABLES
//
/////////////////////////////////

const reg_t		*get_r8(size_t *len);
const reg_t		*get_r8rex(size_t *len);

const reg_t		*get_r16(size_t *len);
const reg_t		*get_r16rex(size_t *len);

const reg_t		*get_r32(size_t *len);
const reg_t		*get_r32rex(size_t *len);

#endif
