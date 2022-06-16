#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool chance=0;
int plays=0;
void printplayground(int *arr,int row, int column)
{
    printf("----------");
    printf("\n| %c| %c| %c|",arr[0],arr[1],arr[2]);
    printf("\n----------");
    printf("\n| %c| %c| %c|",arr[3],arr[4],arr[5]);
    printf("\n----------");
    printf("\n| %c| %c| %c|",arr[6],arr[7],arr[8]);
    printf("\n----------");
}
int main(void)
{
//------------------------------Variable Declaration------------------------------------------------------ 

    int sign;
    int rowPcolumn;
    int playground[9];
    int currrow;
    int currcolumn;
    for(int i=0;i<9;i++)
    {
        playground[i]=32;
    }


// -------------------------------------Starting of the main loop----------------------------------------------------------


    while(1)
    {

        start:
        printplayground(playground,currrow,currcolumn);
// Checking which player will get chance and giving chance to that player----------------------------------------------------


        if(chance)
        {
            printf("\nP%i - O",chance);
        }
        else
        {
            printf("\nP%i - X",chance);
        }
        if(chance == 0)
        {
            chance =1;
        }
        else
        {
            chance =0;
        }


// ------------------------------Taking rows and columns as input----------------------------------------------------------
        printf("\n");
        printf("\nEnter row: ");
        scanf("%d",&currrow);
        printf("Enter column: ");
        scanf("%d",&currcolumn);
        system("clear");
        if(chance== 0)
        {
            sign = 79;
        }
        else
        {
            sign = 88;
        }

// Condition to check the validity of entered row/column and converting row and column to single digit gor 1D array------------
        if(currcolumn<3 || currrow<3 && currcolumn >=0 || currrow >=0)
        {
            if(!(currrow>0 && currrow <4))
            {
                printf("Invalid Column!!!");
                goto start;
            }

            if(currrow==1)
            {
                if(currcolumn>=4)
                {
                    printf("Invalid Column!!!");
                    goto start;
                }
                rowPcolumn = currcolumn-1;
            }
            else if(currrow==2)
            {
                currrow=1;
                if(currcolumn==1)
                {
                    rowPcolumn = 3;
                }
                else if(currcolumn == 2)
                {
                    rowPcolumn = 4;
                }
                else if(currcolumn == 3)
                {
                    rowPcolumn = 5;
                }
                else
                {
                    printf("Invalid Column!!!");
                    goto start;
                }
            }
            else if(currrow==3)
            {
                currrow=2;
                if(currcolumn==1)
                {
                    rowPcolumn = 6;
                }
                else if(currcolumn == 2)
                {
                    rowPcolumn = 7;
                }
                else if(currcolumn == 3)
                {
                    rowPcolumn = 8;
                }
                else
                {
                    printf("Invalid Column!!!");
                    goto start;
                }
            }

        }

// Conditions to check if the space the user is trying to access ins occupied or not-------------------------------------



        if(playground[rowPcolumn]!=32)
        {
            printf("\nSpace preoccupied!!!");
            chance = !chance;
            goto start;
        }
        else
        {
            playground[rowPcolumn] = sign;
        }


// If space is not preoccupied, filled it up and now checking is any player has won the game yet---------------------------


        if((playground[0] == 79 && playground[4] ==79 && playground [8] == 79) || ( playground[2] == 79 && playground[4]==79 && playground[6] == 79) || ( playground[0] == 79 && playground[3]==79 && playground[6] == 79) || ( playground[1] == 79 && playground[4]==79 && playground[7] == 79) || ( playground[2] == 79 && playground[5]==79 && playground[8] == 79) || ( playground[0] == 79 && playground[1]==79 && playground[2] == 79) || ( playground[3] == 79 && playground[4]==79 && playground[5] == 79) || ( playground[6] == 79 && playground[7]==79 && playground[8] == 79))
        {
            printf("P0 Wins!!!");
            break;
        }
        else if((playground[0] == 88 && playground[4] ==88 && playground [8] == 88) || ( playground[2] == 88 && playground[4]==88 && playground[6] == 88) || ( playground[0] == 88 && playground[3]==88 && playground[6] == 88) || ( playground[1] == 88 && playground[4]==88 && playground[7] == 88) || ( playground[2] == 88 && playground[5]==88 && playground[8] == 88) || ( playground[0] == 88 && playground[1]==88 && playground[2] == 88) || ( playground[3] == 88 && playground[4]==88 && playground[5] == 88) || ( playground[6] == 88 && playground[7]==88 && playground[8] == 88))
        {
            printf("P1 Wins!!!");
            break;
        }
        plays++;
        if(plays==9)
        {
            printf("Draw!!!");
            break;
        }

    }
}