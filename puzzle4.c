#include <stdio.h>
#define gibsize(type) (char *)(&type+1)-(char *)(&type)
int main(void)
{
    int y=78777;
    char x;
    printf("%d \n%d",&y,((char)&y));
}