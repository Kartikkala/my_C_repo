#include <stdio.h>
extern float percent(float x,float y);
extern float div(float x, float y);
extern float add(int x, ...);
typedef struct subjects
{
    int maths;
    int physics;
    int chemistry;
    char name[20];
    int roll;
} sub;
int main(void)
{
    sub lists[3];
    for(int i=0;i<2;i++)
    {
        fflush(stdin);
        printf("Enter your name: ");
        gets(lists[i].name);
        printf("Enter roll_no: ");
        scanf("%d",&lists[i].roll);
        printf("Enter marks of maths: ");
        scanf("%d",&lists[i].maths);
        printf("Enter marks of physics: ");
        scanf("%d",&lists[i].physics);
        printf("Enter marks of chemistry: ");
        scanf("%d",&lists[i].chemistry);    
    }
    for (int i=0;i<3;i++)
    {
        printf("Percentage of student %d is: %f",i,percent(add(3,lists[i].maths,lists[i].physics,lists[i].chemistry),3));
    }

}