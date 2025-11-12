#include <stdio.h>

float shipping(float amt, float w)
{
    float ship = 0;
    if(amt > 100)
        ship = 0;
    else
    {
        if(w < 2) ship = 10;
        else if(w <= 5) ship = 15;
        else ship = 20;
    }
    return amt + ship;
}
int main()
{
    float amount, weight, total;
    printf("Enter order amount and weight: ");
    scanf("%f %f", &amount, &weight);
    total = shipping(amount, weight);
    printf("Total cost = %.2f", total);
    return 0;
}

