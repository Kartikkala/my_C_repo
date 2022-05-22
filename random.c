#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int rng()
{
    static int i;
    int tarr[20];
    for(i=0;i<20;i++)
    {
        if(i==20)
        {
            i=0;
        }
        srand(i);
        tarr[i]=rand();
    }
    
}
int main(void)
{
    rng();
    
}