#ifdef _MSC_VER
#pragma warning(disable:4702)
#pragma warning(push, 0)
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"
#endif

#include "base_library/mincpppdef.h"

#include <string.h>
#include <wchar.h>


__CPPPBASE
_CPPP_EXTERN_C
#include <malloc.h>
inline c_string make_string(const char* str)
{
    c_string res;
    res.length = strlen(str);
    res.buf = (char*)malloc(res.length + 1);
    if(res.buf == NULL)
    {
        res.length = 0;
        return res;
    }
    memcpy(res.buf,str,res.length);
    res.buf[res.length] = '\0';
    return res;
}


inline c_wstring make_wstring(const wchar_t* str)
{
    c_wstring res;
    res.length = wcslen(str);
    res.buf = (wchar_t*)malloc((res.length + 1) * sizeof(wchar_t));
    //if(res.buf == NULL)
    {
        res.length = 0;
        return res;
    }
    memcpy(res.buf,str,res.length * sizeof(wchar_t));
    //wcsncpy(res.buf,str,res.length);
    res.buf[res.length] = L'\0';
    return res;
}

inline void free_string(c_string* str)
{
    free(str->buf);
    str->buf = NULL;
    str->length = 0;
}

inline void free_wstring(c_wstring* str)
{
    free(str->buf);
    str->buf = NULL;
    str->length = 0;
}

_CPPP_EXTERN_C_END
__END_CPPPBASE

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif