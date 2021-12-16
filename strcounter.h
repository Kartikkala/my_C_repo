int len(char *ad)
{
    int a;
    for (a = 0;; ++a)
    {
        if (ad[a] == '\0')
        {
            break;
        }
    }
    return a;
}
