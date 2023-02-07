#ifndef _CPPP_BASE_CTYPES_STRING_BASE_H_
#define _CPPP_BASE_CTYPES_STRING_BASE_H_
#include "base_library/mincpppdef.h"
__CPPPBASE
_CPPP_EXTERN_C
extern bool string_not_ascii(const char* str,size_t length);
extern c_string _copy_string(const char* str,size_t length);
extern c_string _copy_wstring(const c_wchar* str,size_t length);
extern c_string assign_stringbuffer(char* buffer,size_t length);
extern c_string assign_wstringbuffer(c_wchar* buffer,size_t length);
extern void free_string(c_string str);
#define _cppp_assign_conststring(str) {(sizeof(str) / sizeof(str[0])) - 1,(void*)str,__CPPP_CSTRING_NONE | __CPPP_CSTRING_CONST}
#define _cppp_assign_constwstring(str) {(sizeof(str) / sizeof(str[0])) - 1,(void*)str,__CPPP_CSTRING_NONE | __CPPP_CSTRING_CONST | __CPPP_CSTRING_WCS}
#define _cppp_null_string {(size_t)0,(void*)"",__CPPP_CSTRING_NONE | __CPPP_CSTRING_CONST}
_CPPP_EXTERN_C_END
__END_CPPPBASE
#endif