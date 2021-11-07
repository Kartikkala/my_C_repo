#include <stdio.h>
#define pi 3.14
int main()
{
    int a, b = 0;
    do
    {
        float x, y;
        printf("Enter radius of the circle for which area is to be calculated: ");
        scanf("%f", &x);
        printf("\n\n");
        y = pi * (x * x);
        printf("The area has been calculated and the area with value of pi=3.14 is: %f\n\n", y);
        printf("Enter 0 to continue or 1 to exit: ");
        scanf("%d", &a);
        b = b + a;

    } while (b<1);
}