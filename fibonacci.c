#include <stdio.h>
int j,k=1;
int fibo(int c,int x)
{
    j=c;
    if (x<=0){printf("Program completed.....");return 0;}
    else
    {
        printf("%d\n",c);
        c=c+k;
        k=j;
        fibo(c,x-1);
    }
}
void main()
{
    int y,x;
    printf("\nEnter range: ");
    scanf("%d", &y);
    fibo(x=0,y);
}