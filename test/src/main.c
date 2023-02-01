#include <testmain.h>
#include <stdio.h>
#include <locale.h>
//msvc,gcc,llvm,borlandc,turboc,xlC,Watcom C/C++

int main()
{
    printf("%lld",(long long)(void*)_CPPP_iconv_open("",""));
}