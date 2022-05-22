#include <stdio.h>
int counter(int num)
{   
    int i=0;
    for(;;i++)
    {
        if(num==0)
        {
            return i;
        }
        num=num/10;
    }
}
int main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("This number has %d digits.", counter(a));
}