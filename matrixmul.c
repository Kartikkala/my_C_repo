#include <stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}},b[2][2]={{1,2},{3,4}},c[2][2],i=0,j=0;
    for (;i<2;)
    {
        for(;j<2;)
        {
            c[i][j]=a[i][j]*b[i][j]+a[i][j]*b[i][j];
        }
    }
    return 0;
}