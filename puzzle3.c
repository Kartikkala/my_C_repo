#include <stdio.h>
int roundoff(float num)
{
    if(num>0)
    {
        num=num+0.5;
    }
    else
    {
        num=num-0.5;
    }
    return (int)num;
}
int main(void)
{
    printf("%d",roundoff(4.7));
}