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
 * @date 2023-2-2
 * @brief C++ Plus C multi-bytes string type
 */
typedef struct
{
    size_t length;
    char* buf;
} c_string;


/**
 * @date 2023-2-2
 * @brief C++ Plus C unicode string type
 */
typedef struct
{
    size_t length;
    wchar_t* buf;
} c_wstring;

/**
 * @date 2023-2-2
 * @brief C++ Plus C multi-bytes string error message type
 */
typedef struct
{
    long long eno;
    c_string msg;
} errmsg_t;


/**
 * @date 2023-2-2
 * @brief C++ Plus C unicode string error message type
 */
typedef struct
{
    long long eno;
    c_wstring msg;
} werrmsg_t;

/**
 * @date 2023-2-2
 * @brief make C++ Plus C multi-bytes string from C-string
 * @param str [in] input string
 * @return C++ Plus C multi-bytes string
 */
extern c_string make_string(const char* str);
/**
 * @date 2023-2-2
 * @brief make C++ Plus C unicode string from C-wstring
 * @param str [in] input wstring
 * @return C++ Plus C unicode string
 */
extern c_wstring make_wstring(const wchar_t* str);
/**
 * @date 2023-2-2
 * @brief free and reset C++ Plus C multi-bytes string
 * @param str [in] string pointer
 */
extern void free_string(c_string* str);
/**
 * @date 2023-2-2
 * @brief free and reset C++ Plus C unicode string
 * @param str [in] string pointer
 */
extern void free_wstring(c_wstring* str);

_CPPP_EXTERN_C_END
__END_CPPPBASE

#endif