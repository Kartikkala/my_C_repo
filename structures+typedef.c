#include <stdio.h>
#include <string.h>
typedef struct students
{
    int marks;
    char grade[2];
    float cgpa;
} stu; 
int main()
{
    stu a,b,c;
    a.marks=100;
    strcpy(a.grade,"A+");
    printf("%s",a.grade);
    b.marks = 99;
    strcpy(b.grade,"A+");
    b.cgpa = 9.1;
    printf("\n%d",b.marks);
    return 0;
}