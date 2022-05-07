#include <stdio.h>
#include <stdlib.h>
typedef struct scoreboard
{
    char player[18];
    int score;
} scoreboard;
int main(void)
{
    scoreboard *a;
    printf("Size of structure: %llu",sizeof(scoreboard));
    printf("\nSize of char:  %llu",sizeof(char));
    printf("\nSize of int: %llu",sizeof(int));
}