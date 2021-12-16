#include <stdio.h>
void mellow(int *as)
{
    *as=2;
    return;
}
int main()
{
int m=12;
mellow(&m);
printf("M is %d",m);
return 0;
}