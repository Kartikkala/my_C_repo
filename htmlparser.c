#include <stdio.h>
#include <string.h>
void parse(char *snippet)
{
    int a = 0, j = 0;
    char new_snippet[strlen(snippet)];
    for (int i = 0; i < strlen(snippet); i++)
    {
        if (snippet[i] == '<')
        {
            a = 1;
        }
        else if (snippet[i] == '>')
        {
            a = 0;
            continue;
        }
        if (a == 0)
        {
            while(j < strlen(snippet))
            {
                new_snippet[j] = snippet[i];
                j+=1;
                break;
            }
        }
    }
    for (int j = 0; j < strlen(snippet); j++)
    {
        snippet[j] = new_snippet[j];
    }
}
int main()
{
    char m[30] = "<head>Hemlo</head>";
    parse(m);
    printf("%s", m);
    return 0;
}