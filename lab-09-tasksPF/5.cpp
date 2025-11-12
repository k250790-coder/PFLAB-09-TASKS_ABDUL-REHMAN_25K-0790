#include <stdio.h>

float bill(float cost, int people)
{
    float tax = cost * 0.08;
    float tip;
    if(cost > 50) tip = cost * 0.15;
    else tip = cost * 0.10;
    float service = 0;
    if(people > 6) service = cost * 0.05;
    return cost + tax + tip + service;
}

int main()
{
    float food, total;
    int p;
    printf("Enter food cost and people: ");
    scanf("%f %d", &food, &p);
    total = bill(food, p);
    printf("Total Bill = %.2f", total);
    return 0;
}

