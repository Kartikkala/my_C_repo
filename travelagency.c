#include <stdio.h>
typedef struct info
{
    char name[20];
    int roll_no;
    char grade[2];
    int marks;
}students;
int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    students class[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter name for student %d: ",i+1);
        scanf("%s",class[i].name);
        printf("\nEnter roll number for student %d: ",i+1);
        scanf("%d",&class[i].roll_no);
        printf("\nEnter grade of this student(A/A+/etc): ");
        scanf("%s",class[i].grade);
        printf("\nEnter the total marks scored by this student: ");
        scanf("%d",&class[i].marks);
    }
    for(int i=0;i<n;i++)
    {
        printf("\nName of student %d: ",i+1);
        puts(class[i].name);
        printf("\nRoll number of student %d: ",i+1);
        printf("%d",class[i].roll_no);
        printf("\nGrades scored by this student: ");
        puts(class[i].grade);
        printf("\nMarks scored by this student: ");
        printf("%d",class[i].marks);
    }
    return 0;
}