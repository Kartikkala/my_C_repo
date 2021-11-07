#include <stdio.h>
float mul(int x,int y);
int main()
{
    int a,b,c;
    a = 10;
    b = 2;
    c = mul(a,b);
    printf("Answer = %d\n",c);

}

float mul(int x, int y)
{
    int p;
    p = x*y;
    return p;

}
