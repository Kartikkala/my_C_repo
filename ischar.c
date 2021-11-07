#include <stdio.h>
void main()
{
    char a;
    int b;
    printf("\nEnter a character: ");
    scanf("%c",&a);
    b=a;
    if(b>=33 && b<=47 || b>=58 && b<=64 || b>=91 && b<=96 || b>=123 && b<=126)
    {printf("The entered character is a special character.");}
    else if(b>=48 && b<=57)
    {printf("The entered character is a digit.");}
    else{
        printf("The entered character is an alphabet, eiher uppercase, either lowercase.");
    }

}