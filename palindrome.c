#include <stdio.h>
#include <C:\Users\hp\vscode\cprograms\power.c>
void main()
{
    int x,a,p,m;
    printf("Enter a number: ");
    scanf("%d",&a);
    p=a;
    printf("\n");
    for (x=1;x<a;a=a/10)     //x=number of digits in a
    {
        x++;
    }
    a=0;
    for (m=0;x>0;p=p/10)
    {
        m=p%10;
        a=a+m*power(x);
        x--;

    }
    printf("%d",a);
}