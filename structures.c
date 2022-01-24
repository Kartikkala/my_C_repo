#include <stdio.h>
#include <string.h>
struct students
{
    int marks;
    char grade[2];
    float cgpa;wd
}; 
int main()
{
    struct students a,b,c;
    a.marks=100;
    strcpy(a.grade,"A+");
    printf("%s",a.grade);
    return 0;
}
