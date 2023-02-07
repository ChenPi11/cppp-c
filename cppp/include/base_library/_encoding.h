#include "mincpppdef.h"
#include "cppp_ctypes/stringbase.h"
#include "libiconv/extras/iconv_string.h"

__CPPPBASE
_CPPP_EXTERN_C
/*
inline c_string copy_mbs(const char* str,const size_t len)
{
    
    //char* res;
    //memcpy((void*)res,(void*)str,len);
    
}

errmsg_t atow(c_string src,const char* charset,c_string* dst)
{
    char* result = NULL;
    size_t len = 0;
    if (_cppp_iconv_string("WCHAR_T", charset,
                     src.buf, (char*)(src.buf+src.length+1), &result, &len) < 0)
    {
        //return {0,c_string{0,NULL,0}};
    }
    //printf("len=%lld;res=%s\n",(long long)len,result);
}*/

__END_CPPPBASE
_CPPP_EXTERN_C_END