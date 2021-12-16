/*Null pointer ---

If any pointer variable is initialized like --
int *ptr = NULL;

then it is called null pointer. This is done so that the pointer variable may not return a garbage value if no value is stored inside it.*/


#include <stdio.h>
void main()
{
    int a=12;
    int* ptr=&a;
    printf("%d",*ptr);
}