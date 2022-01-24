#include <string.h>
void arrRev(char *a)
{
    int j=0,i,y=strlen(a);
    char b[y];
    strcpy(b,a);
    i=y-1;
    for (;i>=0;i=i-1)
    {
        for (;j<=y;)
        {
            a[j]=b[i];
            j=j+1;
            break;
        }
    }
}
