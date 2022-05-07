#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rng(int max_limit)
{
    srand(time(NULL));
    return rand()%max_limit;
}
int main(void)
{
    for(int i=0;i<50;i++)
    printf("%d",rng(3));
}