#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
    FILE *fp1,*fp2,*fp3;
    char letter;
    fp1= fopen("C://Users/hp/Desktop/new.txt","w");
    while(1)
    {
    letter = getch();
    fputc(letter, fp1);
    fputc(letter, stdout);
    if((int)letter == 19)
    {
        break;
    }
    if((int)letter==8)
    {
        fseek(stdout,-1,SEEK_END);
        fputc(3,stdout);
    }
    }
}