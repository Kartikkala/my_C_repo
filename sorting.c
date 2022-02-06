#include <stdio.h>
extern int sort(int *arr);
int main(void)
{
    int a[5]={3,1,2,4,5};
    sort(a);
    for(int i=0;i<5;i++)
    {
        printf("\n%d",a[i]);
    }
}