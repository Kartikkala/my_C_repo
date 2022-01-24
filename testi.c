#include "c:\Users\hp\vscode\cprograms\arrayrev.c"
#include <stdio.h>
char a[]="hello";
int main()
{
    char a[50];
    printf("Enter a string to get it's reverse: ");
    fgets(a,50,stdin);
    arrRev(a);
    printf("The reverse is: %s",a);
}