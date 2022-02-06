int strLen(int *arr)
{
    int m=0;
    for(int i=0;;i=i+sizeof(int))
    {
        m++;
        if(arr[i]=='\0')
        {
            break;
        }
    }
    return m;
}