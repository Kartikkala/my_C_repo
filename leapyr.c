#include <stdio.h>
int main(void)
{
    float days;
    printf("Enter a year: ");
    scanf("%f",&days);
    days=365.25*days;
    days=days-(int)days;
    if(days==0.0)
    {
        printf("\a\nThis is a leap year!!!");
    }
    else
    {
        printf("\nThis is a normal year and not a leap year.");
    }
}