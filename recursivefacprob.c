#include <stdio.h>
int fac(int x)
{
    if (x == 1 || x <= 0)
    {
        return 1;
    }
    else
    {
        return x*fac(x-1);
    }
}
int main()
{
    int z;
    printf("\nEnter a number to calculate its factorial and hit enter: ");
    scanf("%d", &z);
    printf("\nFactorial of the number is: %d",fac(z));
    return 0;
}