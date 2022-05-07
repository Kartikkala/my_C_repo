#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int rows=2,columns=2;
    int **rowptr=(int **)malloc(rows*sizeof(int*));
    for(int i=0;i<rows;i++)
    {
        rowptr[i]=(int *)malloc(columns*sizeof(int));
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("Enter element number(%d,%d): ",i,j);
            scanf("%d",&rowptr[i][j]);
        }
    }
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("\nElement(%d,%d) is: ",i,j);
            printf("%d",rowptr[i][j]);
        }
    }

}