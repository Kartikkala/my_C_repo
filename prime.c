int isPrime(int num)
{
    if(num%2==0||num%5==0 || num %3 ==0 || num%7 == 0)
    {
        if(num == 2 || num ==3 || num == 5 || num == 7)
        {
        return 1;
        }
        else
        return 0;
    }
    else
    {
        return 1;
    }
}