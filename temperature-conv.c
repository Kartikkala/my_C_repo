#include <stdio.h>
float tempc(float f);
float tempf(float c);
int main()
{
    int a;
    float t;
    printf("Hello!!! I am temperature convertor.\n\n Type 1 for converting degree celsius to farenhiet and 2 to convert farenhiet to degree celsius.");
    printf("\n\nChoose option:(1/2) ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Enter temperature in degree celsius and it will be converted to farenhiet: ");
        scanf("%f", &t);
        printf("\n\n");
        printf("%f degree celsuis has been converted to farenhiet and its value in farenhiet is: %f \n", t, tempc(t));
        break;
    case 2:
        printf("Enter temperature in farenhiet and it will be converted to degree celsius: ");
        scanf("%f", &t);
        printf("\n\n");
        printf("%f farenhiet has been converted to degree celsuis and its value in degree celsius is: %f \n", t, tempf(t));
        break;
    }
}
float tempc(float f)
{
    float c;
    /*Point to remember: u need to enter a float either in numerator or denominator while doing division and directly multiplying*/
    c = 5 / 9.0 * (f - 32);
    return c;
}
float tempf(float c)
{
    float f;
    f = ((9 / 5) * c) + 32;
    return f;
}