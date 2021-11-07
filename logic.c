#include <stdio.h>
void main()
{
    float x,y,z;
    printf("Enter scored marks: ");
    scanf("%f",&x);
    printf("Enter total marks: ");
    scanf("%f",&z);
    y = (x/z)*100;
    if(y>=30)
    {
        if(y<=60)
        {
            if (y>=50)
            {
                printf("\n\nYou are 2nd!!! You scored %f percent",y);
            }
            else{printf("\n\nYou are 3rd!!! You scored %f percent",y);}
        }
        else{printf("\n\nYou are 1st!!! You scored %f percent",y);}
    }else{printf("You are failed!!! You scored %f percent",y);}
}