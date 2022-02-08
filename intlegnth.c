int strLen(int *arr)
{
    int m=0;
    for( m=0;;m=m+1)
    {
        if(arr[m]=='\0')
        {
            break;
        }
    }
    return m;
}