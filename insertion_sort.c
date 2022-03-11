#include <stdio.h>
#include "intlegnth.c"
void insert(int *arr)
{
    int total_legnth = strLen(arr), temp;
    for (int i = 0, fornow_legnth = 2; i < fornow_legnth; i++)
    {
        if (fornow_legnth == 2)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                fornow_legnth += 1;
            }
        }
        else
        {
            for (int k = 0; k < fornow_legnth; k++)
            {
                for (int j = 0; j < fornow_legnth; j++)
                {
                    if (k<j && arr[j] > arr[k])
                    {
                        temp = arr[k];
                        arr[k] = arr[j];
                        arr[j]= temp;
                    }
                    else if(k>j && arr[j] > arr[k])
                    {
                        temp = arr[j];
                        arr[j] = arr[k];
                        arr[k]= temp;
                    }
                }
            }
            fornow_legnth+=1;
        }
    }
}