#include <stdio.h>
#include <stdarg.h>
float add(int x, ...);
float sub(float x, float y);
float mul(float x, float y);
float div(float x, float y);
float percent(float x, float y);
int main()
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
    if (a == 1)
    {
        printf("Your answer is: %.3f\n", add(n, m));
    }

    else if (a == 2)
    {
        printf("Your answer is: %.3f\n", sub(n, m));
    }
    else if (a == 3)
    {
        printf("Your answer is: %f\n", mul(n, m));
    }
    else if (a == 4)
    {
        printf("Your answer is: %f\n", div(n, m));
    }
    else if (a == 5)
    {
        printf("Your answer is: %f%\n\n", percent(n, m));
    }
}
/*Addition function*/
float add(int x,...)
{
    int res=1;
    va_list arguments;
    va_start(arguments,x);
    for(int a=0;a<x;x++)
    res= res+va_arg(arguments,float);
    va_end(arguments);
    return res;
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