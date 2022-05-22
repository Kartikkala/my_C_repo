#include <stdio.h>
#include "../random.c"

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) 
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(void)
{
    int arr[20];
    for(int i=0;i<20;i++)
    {
        arr[i]=rng(100);
    }
    for(int i=0;i<20;i++)
    {
        printf("\n%d",arr[i]);
    }

}