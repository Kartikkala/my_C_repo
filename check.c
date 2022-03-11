#include <stdio.h>
extern void insert(int *arr);
int main(void)
{
    int a[5] = {4,3,2,5,1};
    insert(a);
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
}
