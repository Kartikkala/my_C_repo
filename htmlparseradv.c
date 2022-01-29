#include <stdio.h>
#include <string.h>
int main()
{
    int mn = 0;
    char html_snippet[100];
    printf("Please enter your html snippet: ");
    gets(html_snippet);
    for (int i = 0; i < strlen(html_snippet); i++)
    {
        if (mn == 0 && html_snippet[i] == '<' && html_snippet[i + 5] == '>')
        {
            for (int j = 6; j < strlen(html_snippet); j++)
            {
                if (html_snippet[j] == '<')
                {
                    if (html_snippet[j + 1] == '/')
                    {
                        mn += 1;
                        goto end;
                    }
                }
                printf("%c", html_snippet[j]);
            }
        }
        else if (mn == 0 && html_snippet[i] == '<' && html_snippet[i + 2] == '>')
        {
            for (int j = 3; j < strlen(html_snippet); j++)
            {
                if (html_snippet[j] == '<')
                {
                    if (html_snippet[j + 1] == '/')
                    {
                        mn += 1;
                        goto end;
                    }
                }
                printf("%c", html_snippet[j]);
            }
        }
        else if (mn == 0 && html_snippet[i] == '<' && html_snippet[i + 3] == '>')
        {
            for (int j = 4; j < strlen(html_snippet); j++)
            {
                if (html_snippet[j] == '<')
                {
                    if (html_snippet[j + 1] == '/')
                    {
                        mn += 1;
                        goto end;
                    }
                }
                printf("%c", html_snippet[j]);
            }
        }
        else
        {
            printf("This is not a valid html snippet!!!");
            goto end;
        }
    }

end:
    return 0;
}