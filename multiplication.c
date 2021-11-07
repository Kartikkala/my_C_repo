#include <stdio.h>
int main()
{
    int x;
    int Y;
    Y=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(Y <= 10)
    {
        printf("%d X %d = %d \n",x,Y,x*Y);
        Y=Y+1;
    }
return 0;
}