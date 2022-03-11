#include <stdio.h>
int main(void)
{
    int i,n,x=1,m;                 
    printf("Enter range: ");
    scanf("%d",&n);
    for (i=0;i<=n;)
    {
        printf("\n%d",i);  
        m=i;        //storing previous value of i inside the variable m
        i=i+x;    //updating the value of i by x
        x=m;      //updating the value of x by previous value of i.
    }
}