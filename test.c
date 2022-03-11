#include <stdio.h>
#include "c:\Users\hp\vscode\cprograms\strcounter.h"
int main(void)
{
    char ad[5];

    printf("Enter string: ");
    gets(ad);         //takes (string) input including whitespaces

    //scanf is used to take input from user until it encounters a newline,end of file (eof) or """whitespace""".
    //while, gets does not end taking input from user until it encounters a newline or eof. It can take whitespaces as input too, but can only be used for strings....

    printf("Legnth of string is: %d\n", len(ad));

    //printf can be used for various data types, and it does not add a newline character automatically at the end of string, integer or character
    //whereas puts adds a newline character by the end of every character or string. It can only be used for arrays.
    printf("The entered string is: ");
    puts(ad);
    return 0;
}