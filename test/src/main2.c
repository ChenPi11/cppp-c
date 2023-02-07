#include <testmain.h>
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
/*#include <Windows.h>*/
int main2(void)
{
    assign_stringbuffer(NULL,0);
    /*c_string s = _cppp_assign_constwstring(L"12");
    printf("len=%d const=%d isw=%d",s.length,__CPPP_CSTRING_HASPROP(s,__CPPP_CSTRING_CONST),__CPPP_CSTRING_HASPROP(s,__CPPP_CSTRING_WCS));*/
    return 0;
}


#ifdef __GNUC__
int main()
{
    return main2();
}
#endif
/*
printf("%d,%d",__CPPP_CSTRING_HASPROP(str,__CPPP_CSTRING_CONST),__CPPP_CSTRING_HASPROP(str,__CPPP_CSTRING_WCS));
    char buf[100000];
    char src[100000];
    memset(src,'1',100000);
    for(size_t i=0;i<1000;i++)
    {
        DWORD tk=GetTickCount();
        printf("%lld\n",(long long)(GetTickCount()-tk));
    }
    return 0;*/
