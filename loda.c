#include<stdio.h>
int main()
{
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int i,j,k=1;
    for(i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter the element(%d,%d)",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for( i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter the element(%d,%d)",i,j);
        scanf("%d",&b[i][j]);
        }
    }
 
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
         c[i][j]=a[i][j]*b[i][j]+a[i][j]*b[j][i];   
        
        }
    }
    for( i=0;i<2;i++){
        printf("\n");
        for(int j=0;j<2;j++){
            printf("%d\t",c[i][j]);
        }
    }
    
  return 0;
}