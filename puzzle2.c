#include <stdio.h>
int main(void)
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(!(num%2))
    {
        printf("Even");
        break;
    }
    i=num%10;
    while((!(i%3)||!(i%5)||!(i%7))&&(i!=0))
    {
        printf("Odd");
        break;
    }
}