#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int rows1,columns1,rows2,columns2;

    //Starting point

start:
    printf("Enter the number of rows for your first matrix :");
    scanf("%d",&rows1);
    printf("Enter the number of columns for your first matrix :");
    scanf("%d",&columns1);
    printf("Enter the number of rows for your second matrix :");
    scanf("%d",&rows2);
    printf("Enter the number of columns for your second matrix :");
    scanf("%d",&columns2);

    //Condition to check matrix validity

    if(columns1!=rows2){printf("\nBruhhh!!! This is an ivalid matrix!!!\n\n");goto start;}

    //Allocating arrays for first matrix

    int **matrix1=(int **)malloc(rows1*sizeof(int*));

    for(int i=0;i<rows1;i++)
    {
        matrix1[i]=(int *)malloc(columns1*sizeof(int));
    }

    //Allocating arrays for second matrix

    int **matrix2=(int **)malloc(rows2*sizeof(int*));
    
    for(int i=0;i<rows2;i++)
    {
        matrix2[i]=(int *)malloc(columns2*sizeof(int));
    }

    //Allocating arrays for resulting matrix

    int **matrix3=(int **)malloc(rows1*sizeof(int*));

    for(int i=0;i<rows1;i++)
    {
        matrix3[i]=(int *)malloc(columns2*sizeof(int));
    }


    system("cls");
    printf("First matrix!!!\n\n");
    
    //Entring elements in matrix 1
     for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns1;j++)
        {
            printf("Enter element number(%d,%d): ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    system("cls");
    printf("Second matrix!!!\n\n");


    //Entring elements in matrix 2
    for(int i=0;i<rows2;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            printf("Enter element number(%d,%d): ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }


//Calculation of resulting matrix

    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            matrix3[i][j] = 0;
            for(int k=0;k<columns1;k++)
            {
                matrix3[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }

//Printing out the resulting matrix

    system("cls");

    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            printf("\nelement number(%d,%d): ",i,j);
            printf("%d",matrix3[i][j]);
        }
    }
    

}