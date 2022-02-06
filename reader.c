#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[20];
    int consonants=0,vowels=0;
    printf("Enter a string(Max legnth 20): ");
    gets(a);
    for(int i=0;i<=strlen(a);i++)
    {
        if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A'|| a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
        {
            vowels++;
        }
        else
        {
            if(a[i]!='\0')
            consonants++;
        }
    }
    printf("\nNo. of vowels are: %d and No. of consonants are: %d",vowels,consonants);
}