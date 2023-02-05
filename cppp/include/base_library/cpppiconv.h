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


#ifdef __cplusplus
}
#endif

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#endif