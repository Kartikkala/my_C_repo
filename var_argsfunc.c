#include <stdio.h>
#include <stdarg.h>
int mul(int a,...)
{
    int res=1;
    va_list arguments;
    va_start(arguments,a);
    for(int x=0;x<a;x++)
    res= res*va_arg(arguments,int);
    va_end(arguments);
    return res;
}
int main()
{
    printf("%d",mul(3,2,3,4));
    return 0;
}