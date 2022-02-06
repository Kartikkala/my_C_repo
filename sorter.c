extern int strLen(int *arr);
void sort(int *arr)
{
    for(int m,i=0;i<strLen(arr);i++)
    {
        for(int j=0;j<strLen(arr);j++)
        {
        if(arr[i]<arr[j])
        {
            m=arr[j];
            arr[j]=arr[i];
            arr[i]=m;
        }
        }
    }
}