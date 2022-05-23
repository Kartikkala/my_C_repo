#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int total=0;
    char user_expression[50],temp;
    int number=0;
    printf("Enter an expression for addition: ");
    fgets(user_expression,50,stdin);
        for(int i=0,j=0;i<strlen(user_expression);j++,i++)
        {
            if(user_expression[i]=='+' || i==strlen(user_expression)-1)
            {
                total = total+number;
                number=0;
            }
            else
            {
                temp=user_expression[i];
                number=number+(temp-'0');
                if(user_expression[i+1]!='+' && i+2!=strlen(user_expression))
                {
                    number=number*10;
                }
            }
        }
    printf("Total is: %d",total);
}