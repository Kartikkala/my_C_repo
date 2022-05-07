#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//-----------------------function for taking username---------------------------------
char *getusername(void)
{
    char *user_name = malloc(15 * sizeof(char));
    printf("P1, Enter your good name: ");
    gets(user_name);
    free(user_name);
    return user_name;
}

//-----------------------------Random function-----------------------------------------------
int rng(int max_limit)
{
    srand(time(NULL));
    return rand() % max_limit;
}

//-------------------------------score structure---------------------------------------------


typedef struct scoreboard
{
    char player[10];
    int score;
} scoreboard;

//--------------------------------Driver Code-------------------------------------------------


int main(void)
{
    scoreboard data[3][2];
    char comp_opinion[] = {'r', 'p', 's'}, opinion;
    int comp_op,counter_comp = 0, counter_name = 0, final_comp=0,final_usr=0;;

//-----------------------------------taking username------------------------------------------
    char n_ame[15];
    strcpy(n_ame,getusername());

    printf("Information!!! There will be three rounds and 3 matches. Winner will be declared at last. \n\nR= Rock, P = Paper, S = Scissors.\n\n Best of luck!!!\n\n");
    
//------------------------------------Loops started-------------------------------------------
    
    
    for (int i = 1,row=0, matches = 3; matches > 0; matches--, row++,i++)
    {
        counter_comp = 0, counter_name = 0;
        for (int rounds = 3; rounds > 0;)
        {

//-----------------------------------Printing Match Number------------------------------------


            if (rounds == 0 || rounds == 3)
            {
                printf("\n\nMatch %d", i);
            }

//----------------------------------Using random function, Taking input-----------------------
            comp_op = rng(3);
            printf("\nEnter your opinion(R/P/S): ");
            scanf(" %c", &opinion);
            opinion = tolower(opinion);

//---------------------------------------Conditions----------------------------------------------

//-------------------------------------Condition for draw----------------------------------------
            if (opinion == comp_opinion[comp_op])
            {
                printf("Draw!!! Chances remaining(%d)", rounds - 1);
                rounds--;
            }
//-------------------------------------Condition for Rock-----------------------------------------
            else if (opinion == 'r')
            {
                if (comp_opinion[comp_op] == 'p')
                {
                    printf("Computer wins!!!Chances remaining(%d)", rounds - 1);
                    counter_comp++;
                    rounds--;
                }
                else if (comp_opinion[comp_op] == 's')
                {
                    printf("User wins!!! Chances remaining(%d)", rounds - 1);
                    counter_name++;
                    rounds--;
                }
            }

//-------------------------------------Condition for Paper-----------------------------------------

            else if (opinion == 'p')
            {
                if (comp_opinion[comp_op] == 's')
                {
                    printf("Computer wins!!!Chances remaining(%d)", rounds - 1);
                    counter_comp++;
                    rounds--;
                }
                else if (comp_opinion[comp_op] == 'r')
                {
                    printf("User wins!!! Chances remaining(%d)", rounds - 1);
                    counter_name++;
                    rounds--;
                }
            }
//-------------------------------------Condition for Scissors-----------------------------------------
            else if (opinion == 's')
            {
                if (comp_opinion[comp_op] == 'r')
                {
                    printf("Computer wins!!!Chances remaining(%d)", rounds - 1);
                    counter_comp++;
                    rounds--;
                }
                else if (comp_opinion[comp_op] == 'p')
                {
                    printf("User wins!!! Chances remaining(%d)", rounds - 1);
                    counter_name++;
                    rounds--;
                }
            }
//-------------------------------------Invalid input-----------------------------------------
            else
            {
                printf("Please enter a valid option!!! Chances remaining(%d)", rounds - 1);
            }
        }

//--------------------------------------Saving Data------------------------------------------
        
            for(int col=0;col<2;col++)
            {
                if(col==0)
                {
                strcpy(data[row][col].player,"Comp");
                data[row][col].score=counter_comp;
                final_comp=final_comp+counter_comp;
                }
                else if(col==1)
                {
                    strcpy(data[row][col].player,n_ame);
                    data[row][col].score=counter_name;
                    final_usr=final_usr+counter_name;
                }
            }
    }
    printf("\n");
    printf("-----------------------------Scoreboard-------------------------------\n");
    for(int row=0;row<3;row++)
        {printf("\n**********************Match: %d********************************\n",row+1);
            for(int col=0;col<2;col++)
            {
                printf("%s: ",data[row][col].player);
                printf("%d\n",data[row][col].score);
            }
        }

    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx----------Winner--------xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    final_comp>final_usr?printf("\n\nComputer Wins!!!"):printf("\n\n%s Wins!!!",n_ame);
}