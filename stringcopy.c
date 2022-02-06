char* strCpy(char *dest_string,char *source_string)
{
    int i;
    for(i = 0;i!=sizeof(source_string);i=i+sizeof(char))
    {
    *dest_string=*source_string;
    dest_string=dest_string+sizeof(char);
    source_string=source_string+sizeof(char);
    }
    return dest_string-i;
}