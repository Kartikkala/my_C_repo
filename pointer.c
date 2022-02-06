/*Null pointer ---

If any pointer variable is initialized like --
int *ptr = NULL;

then it is called null pointer. This is done so that the pointer variable may not return a garbage value if no value is stored inside it.*/


#include <stdio.h>
int main()
{
    int a=12;
    for(int i=0;i<5;i++)
    {
        int *ptr=&a+i;
        printf("\nSize of a: %llu a+%d: %d",sizeof(a),i,*ptr);
    }
    return 0;
}