#include <stdio.h>
int main(void)
{
    
    for(int n=2,m=5,i=1;i<=9;i=i+2)
    {printf("\n");
        for(int j=1;j<=9;j++)
        {
            if(j==m)
            {
            for(int k=1;k<=i;k++)
            {
                if(k%2!=0) 
                {
                printf("%d",i); 
                }
                else
                {
                 printf("%d",n);   
                }
            }m=m-1;
            }
            else
            {
                printf(" ");
            }
        }
    }
}