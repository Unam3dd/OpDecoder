#ifndef TYPES_H
#define TYPES_H

#include <stddef.h>

/////////////////////////////
//
//		BASIC UNSIGNED TYPES
//
/////////////////////////////

typedef unsigned long long	u64_t;
typedef unsigned long long	uint64_t;
typedef unsigned long long	ulong_t;
typedef unsigned long long	qword_t;

typedef unsigned int		uint_t;
typedef unsigned int		uint32_t;
typedef unsigned int		u32_t;
typedef unsigned int		dword_t;

typedef unsigned short		ushort_t;
typedef unsigned short		uint16_t;
typedef unsigned short		u16_t;
typedef unsigned short		word_t;

typedef unsigned char		byte_t;
typedef unsigned char		uint8_t;
typedef unsigned char		u8_t;
typedef unsigned char		uchar_t;

/////////////////////////////
//
//			CAST PTR
//
/////////////////////////////

typedef unsigned long long	ptr_t;
typedef unsigned long long	ptr64_t;
typedef unsigned int		ptr32_t;

/////////////////////////////
//
//			PTR
//
/////////////////////////////

typedef unsigned long long* qword_ptr_t;
typedef unsigned long long* ulong_ptr_t;
typedef unsigned long long* u64_ptr_t;
typedef unsigned long long* uint64_ptr_t;

typedef unsigned int*		dword_ptr_t;
typedef unsigned int*		uint_ptr_t;
typedef unsigned int*		u32_ptr_t;
typedef unsigned int*		uint32_ptr_t;

typedef unsigned short*		word_ptr_t;
typedef unsigned short*		u16_ptr_t;
typedef unsigned short*		uint16_ptr_t;
typedef unsigned short*		short_ptr_t;

typedef unsigned char*		u8_ptr_t;
typedef unsigned char*		uint8_ptr_t;
typedef unsigned char*		bytes_ptr_t;
typedef unsigned char*		char_ptr_t;

/////////////////////////////
//
//			SIGNED
//
/////////////////////////////

typedef signed long long	i64_t;

typedef signed int			i32_t;
typedef signed int			int32_t;

typedef signed short 		i16_t;
typedef signed short 		int16_t;

typedef signed char			i8_t;
typedef signed char			int8_t;

/////////////////////////////
//
//			SIGNED PTR
//
/////////////////////////////

typedef signed long long*	i64_ptr_t;
typedef signed long long*	int64_ptr_t;
typedef signed int*			i32_ptr_t;
typedef signed int*			int32_ptr_t;
typedef signed short*		i16_ptr_t;
typedef signed short*		int16_ptr_t;
typedef signed char*		i8_ptr_t;
typedef signed char*		int8_ptr_t;

/////////////////////////////
//
//		 VECTOR TYPE
//
//		 128-256 Bits type
//
/////////////////////////////

// Aligned Signed
typedef signed long	int128_a_t	__attribute__((__vector_size__(16), __aligned__(16)));
typedef signed long	int256_a_t	__attribute__((__vector_size__(32), __aligned__(32)));

// Unaligned Signed
typedef signed long	int128_t	__attribute__((__vector_size__(16), __aligned__(1)));
typedef signed long	int256_t	__attribute__((__vector_size__(32), __aligned__(1)));

// Aligned Unsigned
typedef unsigned long uint128_a_t __attribute__((__vector_size__(16), __aligned__(16)));
typedef unsigned long uint256_a_t __attribute__((__vector_size__(32), __aligned__(32)));

// Unaligned Unsigned

typedef unsigned long	uint128_t __attribute__((__vector_size__(16), __aligned__(1)));
typedef unsigned long	uint256_t __attribute__((__vector_size__(32), __aligned__(1)));

/////////////////////////////
//
//			ENUM
//
/////////////////////////////

typedef enum bool_t
{
	FALSE,
	TRUE
} bool_t;

#endif
