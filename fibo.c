#include <stdio.h>
void main()
{
    int i,n,x=1,m;                 
    printf("Enter range: ");
    scanf("%d",&n);
    for (i=0;i<=n;)
    {
        printf("\n%d",i);  
        m=i;    
        i=i+x;    
        x=m;   
    }
}