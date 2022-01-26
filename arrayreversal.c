#include <stdio.h>
#include <string.h>
char arrRev(char *arr)
{
    int x=strlen(arr);
    char mrr[x];
    for(int n=0;x<n;x++)
    {
        mrr[x]=arr[-x-1];
    }
    return mrr;
}
int main()
{
    char a[20]="khelloiamhello";
    printf("%s",arrRev(a));

return 0;
}