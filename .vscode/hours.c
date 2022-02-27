#include <stdio.h>
int main(void)
{
    int hours, minutes;
    printf("Enter hours: ");
    scanf("%d",&hours);
    printf("Enter minutes: ");
    scanf("%d",&minutes);
    printf("Total number of minutes: %d",(hours*60)+minutes);
}