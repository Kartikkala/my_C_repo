#include <stdio.h>
#include <string.h>
int main()
{
    char a[50],b[50],c[50];
    printf("Enter your name: ");
    gets(a);
    printf("Enter your friend's name: ");
    gets(b);
    strcpy(c,strcat(a,b));
    printf("Name which came after joining ur names are: ");
    puts(c);
return 0;
}