#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    char *ptr=(char *)malloc(sizeof(char)*10);
    printf("Enter range: ");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        printf("\nElement %d: %d",i,*(ptr+i));
    }
    free(ptr);
}