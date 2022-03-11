#include <stdio.h>
#include <string.h>
typedef struct info
{
    char name[20];
    int roll_no;
    char grade[2];
    float marks;
}students;
int main()
{
    int n,max_mm;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    students class[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter name for student %d: ",i+1);
        scanf("%s",class[i].name);
        printf("\nEnter roll number for student %d: ",i+1);
        scanf("%d",&class[i].roll_no);
        printf("\nEnter the total marks scored by this student: ");
        scanf("%f",&class[i].marks);
        printf("Enter maximum marks: ");
        scanf("%d",&max_mm);
        if(class[i].marks >=90)
        {
            strcpy(class[i].grade ,"A+");           
        }
        else if(class[i].marks <90 && class[i].marks >=80)
        {
            strcpy(class[i].grade ,"A");
        }
        else if(class[i].marks <80 && class[i].marks >= 70)
        {
            strcpy(class[i].grade ,"B+");
        }
        else if(class[i].marks <70 && class[i].marks >= 60)
        {
            strcpy(class[i].grade ,"B");
        }
        else        
        {
            strcpy(class[i].grade ,"C");
        }

    }
    for(int i=0;i<n;i++)
    {
        printf("--------------------------------------------------------------------------------------------\n");
        printf("\n\t\t\t\tName of student %d: ",i+1);
        puts(class[i].name);
        printf("\n--------------------------------------------------------------------------------------------\n");
        printf("\nRoll number of student %d: ",i+1);
        printf("%d",class[i].roll_no);
        printf("\nGrades scored by this student: ");
        puts(class[i].grade);
        printf("Percentage scored by this student: %f\n" ,((class[i].marks/max_mm))*100);
    }
    return 0;
}