#include <stdio.h>
int mul(int a,int b)
{
    static int res;
    res+= a*b;
    return res; 
}
int main()
{
    printf("\n%d",mul(2,3));      
    printf("\n%d",mul(2,3));      
    printf("\n%d",mul(2,3));      
    return 0;
}