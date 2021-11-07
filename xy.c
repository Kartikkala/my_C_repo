#include <stdio.h>
float percent(float x,float y);
int main()
{
    float a,b,c;
    printf("Enter total marks(MAX. MARKS): ");
    scanf("%f",&a);
    printf("\nEnter the marks gained: ");
    scanf("%f",&b);
    c = percent(a,b);
    printf("\nPercentage is: %.2f %\n", c);
    return 0;

}
float percent(float x, float y)
{
    float z,c;
    z = y/x;
    c = z*100;
    return c;
}