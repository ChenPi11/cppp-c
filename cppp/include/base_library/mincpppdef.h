/**
 * @file include/base_library/mincpppdef.h
 * @author ChenPi11
 * @copyright Copyright (C) 2023
 * @date 2023-2-2
 * @language C
 * @brief C++ Plus C minimal types defines
 */
#ifndef _CPPP_BASE_MINCPPPDEF_H_
#define _CPPP_BASE_MINCPPPDEF_H_
#include "_platform.h"
#include <stddef.h>

#ifdef __cplusplus
#define _CPPP_EXTERN_C extern "C" {
#define _CPPP_EXTERN_C_END }
#else
#define _CPPP_EXTERN_C
#define _CPPP_EXTERN_C_END
#endif

__CPPPBASE
_CPPP_EXTERN_C

/**
 * @date 2023-2-7
 * @brief byte
 */
typedef unsigned char c_byte;
#ifdef __cplusplus
typedef wchar_t c_wchar;
#else
typedef unsigned short c_wchar;
#endif

#define __CPPP_CSTRING_NONE     (c_byte)0b00000000
#define __CPPP_CSTRING_WCS      (c_byte)0b00000001
#define __CPPP_CSTRING_CONST    (c_byte)0b00000010
#define __CPPP_CSTRING_SETPROP(cs,p) (cs.prop |= p)
#define __CPPP_CSTRING_HASPROP(cs,p) (cs.prop & p)
/**
 * @date 2023-2-2
 * @brief C++ Plus C multi-bytes string type
 */
typedef struct
{
    size_t length;
    void* buf;
    c_byte prop;
} c_string;

/**
 * @date 2023-2-2
 * @brief C++ Plus C multi-bytes string error message type
 */
typedef struct
{
    long eno;
    c_string msg;
} errmsg_t;

_CPPP_EXTERN_C_END
__END_CPPPBASE

#endif