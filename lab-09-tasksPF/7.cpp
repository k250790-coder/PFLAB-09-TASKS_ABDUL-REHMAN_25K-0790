#include <stdio.h>

float rent(int days, int km)
{
    float cost = days * 40;
    int free = days * 100;
    if(km > free)
        cost += (km - free) * 0.25;
    if(days >= 7)
        cost = cost * 0.90;
    return cost;
}
int main()
{
    int d, k;
    printf("Enter days and kilometers: ");
    scanf("%d %d", &d, &k);
    printf("Total Cost = %.2f", rent(d, k));
    return 0;
}

