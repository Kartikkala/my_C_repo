#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int stopper(char *ptr)
{
    for(int i=0;;i++)
    {
        if(*(ptr+i)==0)
        {
            return i;
        }
    }
}
void freem(void *ptr)
{
    int limit=stopper(ptr);
    strcpy((ptr+limit+1),limit);
    free(ptr);
}
int main(void)
{
    FILE *fileptr=NULL;
    char *writer = (char *)malloc(10*sizeof(char));

    fileptr = fopen("C://Users/hp/Desktop/new.txt","w");
    printf("Start entring: ");
    gets(writer);
    int limit=stopper(writer);
    printf("%d",limit);
    for(int i=0;i<limit;i++)
    {
        fprintf(fileptr,"%c",*(writer+i));
    }
    printf("\n%d",*(writer+limit+1));
}