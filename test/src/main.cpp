#include <testmain.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
//msvc,gcc,llvm,borlandc,turboc,xlC,Watcom C/C++
#include <wchar.h>
#include <iostream>
using namespace ___CPPP_BASE_LIBRARY_NS;

int main()
{
    /*::setlocale(LC_ALL,"en_US.UTF-8");
    while(0)
    {
        c_wstring ws = make_wstring(L"T测试T");
        printf("%ls",ws.buf);
        free_wstring(&ws);
    }*/
    //return 0;
    const char* s = "eee哈哈哈";
    char* result = NULL;
    size_t len=0;
    if (_cppp_iconv_string("utf-8", "utf-8",
                     s, s+strlen(s)+1, &result, &len) < 0)
    printf("ERROR");
    printf("len=%lld;res=%s\n",(long long)len,result);
}