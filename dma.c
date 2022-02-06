#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Size: ");
    scanf("%d",&n);
    int a[n];
    for(int j=0;j<n;j++)
    {
    printf("Enter element %d: ",j);
    scanf("%d",&a[j]);
    }
    for(int j=0;j<n;j++)
    {
    printf("Element %d: ",j);
    printf("%d",a[j]);
    }
    return 0;
}