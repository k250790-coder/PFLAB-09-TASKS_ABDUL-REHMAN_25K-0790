#include <stdio.h>

int processTransaction(int limit, int amount)
{
    if(amount <= limit)
    {
        printf("APPROVED\n");
        limit = limit - amount;
    }
    else
    {
        printf("DECLINED\n");
    }
    return limit;
}
int main()
{
    int limit = 5000, amount, newLimit;
    printf("Enter transaction amount: ");
    scanf("%d", &amount);
    newLimit = processTransaction(limit, amount);
    printf("Remaining Limit: %d", newLimit);
    return 0;
}

