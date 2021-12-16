#include <stdio.h>
void add(int *ab,int *ba)
{
    int c,d;
    c=*ab+*ba;
    d=*ab-*ba;
    *ab=c;
    *ba=d;
}
int main()
{
int a=5,b=3;
printf("A: %d B: %d",a,b);
add(&a,&b);
printf("\nA: %d B: %d",a,b);
return 0;
}