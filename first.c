#include <stdio.h>
#include "intlegnth.c"
int arr[2];
int n=2;
void printarr(int pos)
{
    if(pos==n)
    {
        for(int i=0;i<n;i++)
        {
            printf("Hii: %d",arr[i]);
            return ;
        }
    }
    arr[pos]=0;
    printarr(pos+1);
    arr[pos]=1;
    printarr(pos+1);
}
int main(void)
{
    printarr(0);
    
}