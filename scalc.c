#include <stdio.h>
float add(float x, float y);
float sub(float x, float y);
float mul(float x, float y);
float div(float x, float y);
float percent(float x, float y);
int main()
{
    int index=0;
    do
    {
        int a;
        float n, m;
        printf("Welcome!!!!");
        printf("\nMy name is calc, and I am always ready to solve your arithmetic problems!!!");
        printf("\n\n Choices: \n 1 = Add \n 2 = Subtract \n 3 = Multiplication \n 4 = Division \n 5 = Percentage");
        printf("\n\nEnter first number: ");
        scanf("%f", &n);
        printf("\nNow enter the operation you want me to do: ");
        scanf("%d", &a);
        printf("\nEnter second number: ");
        scanf("%f", &m);
        switch (a)
        {
        case 1:
            printf("Your answer is: %.3f\n", add(n, m));
            break;
        case 2:
            printf("Your answer is: %.3f\n", sub(n, m));
            break;
        case 3:
            printf("Your answer is: %f\n", mul(n, m));
            break;
        case 4:
            printf("Your answer is: %f\n", div(n, m));
            break;
        case 5:
            printf("Your answer is: %f%\n\n", percent(n, m));
            break;
        default:
            printf("Pls enter correct input data!!!!!\n\n");
            break;
        }
        printf("Enter 0 to continue or 1 to exit: ");
        scanf("%d",&index);
        printf("\n\n");
    } while (index < 1);
}
/*Addition function*/
float add(float x, float y)
{
    float z;
    z = x + y;
    return z;
}
/*Sub function*/
float sub(float x, float y)
{
    float z;
    z = x - y;
    return z;
}
/*Mul function*/
float mul(float x, float y)
{
    float z;
    z = x * y;
    return z;
}
float div(float x, float y)
{
    float z;
    z = x / y;
    return z;
}
float percent(float x, float y)
{
    float z;
    z = (x / y) * 100;
    return z;
}
