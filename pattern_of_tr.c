#include <stdio.h>
int main(void)
{
    for(int counter,n=1,m=5,i=1;i<=9;i=i+2,n++)
    {
        printf("\n");
        counter=n;
        for(int j=1;j<=9;j++)
        {
            if(j==m)
            {
            for(int k=1;k<=i;k++)
            {
                                     //midpoint = n counter is that number from where we have to start counting of a row until the end of that number(counter)
                if(k==n) 
                {
                printf("%d",i); 
                counter--;
                }
                else
                {
                 printf("%d",counter);
                 if(k<n)
                 {
                     counter++;
                 }   
                 else{counter--;}
                }
            }m=m-1;break;
            }
            else
            {
                printf(" ");
            }
        }
    }
}