#ifndef BUFFER_H
#define BUFFER_H

#include "types.h"
#include <string.h>
#include <stdlib.h>

#define BUFFER_TYPEDEF(NAME)\
	typedef struct buffer_##NAME_t buffer_##NAME_t;

#define BUFFER_DEFINE(T, NAME, SIZE)\
	typedef struct buffer_##NAME_t\
	{\
		T		data[SIZE];\
		union {\
			u64_ptr_t	u64;\
			int64_ptr_t	i64;\
			u32_ptr_t	u32;\
			int32_ptr_t	i32;\
			u16_ptr_t	u16;\
			int16_ptr_t i16;\
			int8_ptr_t	i8;\
			u8_ptr_t	u8;\
		};\
		union {\
			size_t	len;\
			size_t	size;\
		};\
		size_t capacity;\
	} buffer_##NAME_t;

#define BUFFER_INIT(buf)\
	({\
		buf.u8 = buf.data;\
		memset(buf.data, 0, buf.capacity);\
	 })

#define BUFFER_CREATE(T, NAME, SIZE)\
	struct buffer_##NAME {\
		T	data[SIZE];\
		union {\
			u64_ptr_t	u64;\
			int64_ptr_t	i64;\
			u32_ptr_t	u32;\
			int32_ptr_t	i32;\
			u16_ptr_t	u16;\
			int16_ptr_t i16;\
			int8_ptr_t	i8;\
			u8_ptr_t	u8;\
		};\
		union {\
			size_t	len;\
			size_t	size;\
		};\
		size_t capacity;\
	} NAME = { 0, 0, .capacity = SIZE };BUFFER_INIT(NAME);

#define BUFFER_ALLOC(T, NAME, SIZE)\
	struct buffer_##NAME {	\
		T		*data;		\
		union {				\
			u64_ptr_t	u64;\
			int64_ptr_t	i64;\
			u32_ptr_t	u32;\
			int32_ptr_t	i32;\
			u16_ptr_t	u16;\
			int16_ptr_t i16;\
			int8_ptr_t	i8;\
			u8_ptr_t	u8;\
		};\
		union {\
			size_t	len;\
			size_t	size;\
		};\
		size_t capacity;\
	} NAME = { .data = (T*)malloc(sizeof(T) * SIZE), .len = 0, .capacity = SIZE };BUFFER_INIT(NAME);

#define BUFFER_ZERO(buf) (memset(buf.data, 0, buf.capacity); buf.len = 0;)

#define BUFFER_COPY(buf, bytes, size)\
	({\
		memcpy(buf.data, bytes, size));\
		buf.size = size;\
	})

#define BUFFER_STRCPY(buf, string) (strncpy(buf.data, string, strlen(string)))
#define BUFFER_CAPACITY(buf) (buf.capacity)
#define BUFFER_FREE(buf)\
	({\
	 	free(buf.data);\
		buf.data = NULL;\
	 })

#endif
