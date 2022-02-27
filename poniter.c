#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int j=0,total=0;
    char user_expression[50],numbers[20];
    printf("Enter an expression for addition: ");
    gets(user_expression);
    for(int i=0;i<=strlen(user_expression);i++)
    {
        if(user_expression[i]=='+')
        {
            continue;
        }

        for(;;j++)
        {
            numbers[j]=user_expression[i];
            if(user_expression[i+1]=='+' || user_expression[i+1]=='\0')
            {
                total = total+atoi(numbers);
                j=0;
                break;
            }
            break;
        }
    }
    printf("Total is: %d",total);
}