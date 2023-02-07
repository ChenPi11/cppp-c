#include <base_library/cppp_ctypes/stringbase.h>
#include <malloc.h>
#include <memory.h>
__CPPPBASE
_CPPP_EXTERN_C

#define cppp_isascii(c) (c >= 0 && c <= 127)

bool string_not_ascii(const char* str,size_t length)
{
    size_t i;
    for(i=0;i<length;i++)
    {
        if(!cppp_isascii(str[i])){return false;}
    }
    return true;
}
c_string _copy_string(const char* str,size_t length)
{
    c_string res;
    res.buf = malloc(length+1);
    if(res.buf==NULL)
    {
        res.length = 0;
        res.prop = __CPPP_CSTRING_NONE;
        return res;
    }
    memcpy(res.buf,str,length);
    ((char*)res.buf)[length]='\0';
    return res;
}
c_string _copy_wstring(const c_wchar* str,size_t length)
{
    c_string res;
    res.buf = malloc((length+1)*sizeof(c_wchar));
    if(res.buf==NULL)
    {
        res.length = 0;
        res.prop = __CPPP_CSTRING_WCS;
        return res;
    }
    memcpy(res.buf,str,length*sizeof(c_wchar));
    ((c_wchar*)res.buf)[length] = 0;
    return res;
}
c_string assign_stringbuffer(char* buffer,size_t length)
{
    c_string res;
    res.buf=buffer;
    res.length=length;
    res.prop=__CPPP_CSTRING_NONE;
    return res;
}
c_string assign_wstringbuffer(c_wchar* buffer,size_t length)
{
    c_string res;
    res.buf=buffer;
    res.length=length;
    res.prop=__CPPP_CSTRING_WCS;
    return res;
}
void free_string(c_string str)
{
    if(!__CPPP_CSTRING_HASPROP(str,__CPPP_CSTRING_CONST))
    {
        free(str.buf);
    }
    str.length=0;
    str.buf=NULL;
    str.prop=__CPPP_CSTRING_NONE;
}

_CPPP_EXTERN_C_END
__END_CPPPBASE