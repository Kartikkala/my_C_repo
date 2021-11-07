#include <stdio.h>
void main()
{
    int y;
    printf("\nEnter something: ");
    scanf("%d",&y);
    switch(y)
    {
        case 1:
            #define x 0
            break;
        case 2:
            #define x 1
            break;
    }
    #if (x==0)
    printf("Hello");
    #elif (x==1)
    printf("Lello");
    #endif
}