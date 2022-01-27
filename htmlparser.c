#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    puts("Enter a HTML code: ");
    gets(a);
    if (a[0] == '<')
    {
        if (a[1] == 'h')
        {
            if (a[2] == '1' || a[2] == '2' || a[2] == '3')
            {
                for (int i = 4; i < strlen(a); i++)
                {
                    if (a[i] == '<')
                    {
                        goto end;
                    }
                    printf("%c", a[i]);
                }
            }
            else if (a[2] == 'e')
            {
                if (a[3] == 'a')
                {
                    for (int i = 6; i < strlen(a); i++)
                    {
                        if (a[i] == '<')
                        {
                            goto end;
                        }
                        printf("%c", a[i]);
                    }
                }
            }
        }
        else if (a[1] == 't' || a[1] == 'b' || a[1] == 'i')
        {
            for (int i = 3; i < strlen(a); i++)
            {
                if (a[i] == '<')
                {
                    goto end;
                }
                printf("%c", a[i]);
            }
        }
    }
    else{printf("This was not a valid html code snippet!");}
end:
    return 0;
}