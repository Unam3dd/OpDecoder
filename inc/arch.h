#ifndef ARCH_H
#define ARCH_H

//////////////////////////////////
//
//	       TYPEDEFS
//
/////////////////////////////////

typedef enum arch_t arch_t;

//////////////////////////////////
//
//	      ENUM
//
/////////////////////////////////

enum arch_t
{
	ARCH_UNSPEC = 0 << 0,
	ARCH_X86	= 1 << 0,
	ARCH_X64	= 1 << 1
};

#define GET_ARCH(a) (a % 3)

#endif
