/**
 * @file include/base_library/cpppiconv.h
 * @author ChenPi11
 * @copyright Copyright (C) 2023
 * @date 2023-1-31
 * @language C++
 * @brief C++ Plus libiconv wrapper
 */
#ifndef _CPPP_BASE_CPPPICONV_H_
#define _CPPP_BASE_CPPPICONV_H_

//disable all warnings
#ifdef __GNUC__
#pragma GCC system_header
#endif
#ifdef _MSC_VER
#pragma warning(push, 0)
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"
#endif

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef BUILDING_LIBICONV
#undef BUILDING_LIBICONV
#endif

//extern 

#include "../libiconv/config.h"
#include "../libiconv/localcharset.h"
#include "../libiconv/relocatable.h"
#include "../libiconv/iconv.h"
//define C++ Plus libiconv wrapper macros
#define _CPPP_ICONV_VER _libiconv_version
#define _CPPP_iconv libiconv
#define _CPPP_iconv_open libiconv_open
#define _CPPP_iconvctl libiconvctl
#define _CPPP_iconvlist libiconvlist
#define _CPPP_iconv_close libiconv_close
#define _CPPP_iconv_open_into libiconv_open_into
#define _CPPP_iconv_t libiconv_t

//undef libiconv macros
#undef iconv
#undef iconv_open
#undef iconvctl
#undef iconvlist
#undef iconv_close
#undef iconv_open_into
#undef iconv_t


#ifdef __cplusplus
}
#endif

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#endif