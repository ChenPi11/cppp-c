#include <testmain.h>
#include <stdio.h>
int main2(void)
{
    printf("C lang\n");
    return 0;
}


#ifdef __GNUC__
int main()
{
    return main2();
}
#endif