#include "stdio.h"
int add(int d,int f)
{
    return d+f;
}
int main(void)
{
    int x,y,c;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    printf("The value of x+y is : %d",add(x,y));
    c=5+add(x,y);
    printf("This is c of main: %d",c);
}