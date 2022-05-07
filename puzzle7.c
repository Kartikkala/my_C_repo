int strlenx(char *str)
{
    static int i=0;
    if(str[i]=='\0')
    {
        return i;
    }
    else
    {
        i++;
        strlenx(str);
    }
}