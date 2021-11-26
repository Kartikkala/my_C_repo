int power(int m)
{
    int y=10;
    while (m>0)
    {
        y=y*10;   //x=100 x=1000 x=10000 x=100000
        m--;
    }
    y=y/100;
    return y;
}