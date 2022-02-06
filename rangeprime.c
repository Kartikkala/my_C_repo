#include <stdio.h>
extern int isPrime(int num);
int main(void)
{
    int from,to;
    printf("Enter first digit of range: ");
    scanf("%d",&from);
    printf("Enter the last digit of range: ");
    scanf("%d",&to);
    for (int i=from;i<=to;i++)
    {
        if(isPrime(i))
        {
            printf("\n%d",i);
        }
    }
}