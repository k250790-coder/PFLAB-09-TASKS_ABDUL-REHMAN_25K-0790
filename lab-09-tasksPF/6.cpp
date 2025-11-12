#include <stdio.h>

float taxCalc(float income)
{
    float tax = 0;
    if(income > 50000)
        tax = (income - 50000) * 0.20 + 3000;
    else if(income > 20000)
        tax = (income - 20000) * 0.10;
    printf("Tax = %.2f\n", tax);
    printf("Net Income = %.2f\n", income - tax);
    return tax;
}
int main()
{
    float inc;
    printf("Enter income: ");
    scanf("%f", &inc);
    taxCalc(inc);
    return 0;
}

