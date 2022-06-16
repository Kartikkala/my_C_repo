#include <stdio.h>
#include <stdlib.h>

int isEven(int num)
{
    if(num%2 == 0)
    {
        return 1;
    }
    else{return 0;}
}
int main(void)
{
    int i;
    char temp[56];
    int *arr,*odd,*even;
    arr = (int *)malloc(sizeof(int));
    for(i=0;;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%s",temp);
        if(temp[0]<=57 && temp[0]>=48)
        {
            arr[i] = atoi(temp);
            arr = (int *)realloc(arr,sizeof(int)*(i+1));
        }
        else
        {
            break;
        }
    }   
    if(isEven(i))
    {
        even = (int *)malloc(sizeof(int)*i/2);
        odd = (int *)malloc(sizeof(int)*i/2);
    }
    else
    {
        even = (int *)malloc(sizeof(int)*((i/2)+1));
        odd = (int *)malloc(sizeof(int)*((i/2)+1));
    }
    if(even ==NULL && odd ==NULL)
    {
        printf("Memory not allocated!!!");
        exit(-1);
    }
    else
    {
        for(int j=0;;j++)
        {
            if(isEven(arr[j]))
            {
                even[j] = arr[j];
            }
            else
            {
                odd[j] = arr[j];
            }
        }
    }
}