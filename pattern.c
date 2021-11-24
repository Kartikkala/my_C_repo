#include<stdio.h>
void main()
{
    int b,u;
    printf("Enter a number: ");
    scanf("%d",&u);
    for(;u>=1;u--)
    {printf("\n");
        for(b=1;b<=u;b++)
        {
            printf("*");
        }
    }
}