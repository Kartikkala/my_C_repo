#include <stdio.h>
extern int sort(int *arr);
int main(void)
{
    int n;
    printf("Enter the total number of elemets which are to be sorted: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n;i++)
    {
    printf("Enter element no. %d: ",i+1);
    scanf("%d",&a[i]);
    }
    sort(a);
    for(int i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}