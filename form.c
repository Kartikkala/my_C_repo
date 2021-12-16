#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("cls");
    char a[50], b[50], c[50];
    int d;
    printf("Hello kid!!!, let's fill a form!!!!");
    printf("\nEnter name: ");
    scanf("%s", a);
    printf("\nEnter address: ");
    scanf("%s", b);
    printf("\nEnter city name: ");
    scanf("%s", c);
    printf("\nEnter city pin code: ");
    scanf("%d", &d);
    printf("Your details are: \n Name :  %s \n Door no.,Street no. :  %s \n City,Pin Code: %s, %d\n", a, b, c, d);
}