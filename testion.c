#include "stringcopy.c"
#include <stdio.h>
int main(void)
{
    char a[6]="hemlo",b[6];
    strCpy(b,a);
    puts(b);
}