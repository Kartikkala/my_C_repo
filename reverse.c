#include <stdio.h>
int reverse(int num)
{
    int rev=0;
    for(int i=0;;i++)
    {
        rev=rev+(num%10);
        rev=rev*10;
        num=num/10;
        if(num==0)
        {
            return rev/10;
        }
    }

}
int main(void)
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Reverse is: %d",reverse(n));

}