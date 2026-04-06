#include<stdio.h>

int total_recharge(int amount,int months)
{
    if(months==0)
        return 0;
    return amount+total_recharge(amount,months-1);
}

int main()
{
    int amt,months,total;

    printf("Enter the monthly recharge amount:\n");
    scanf("%d",&amt);

    printf("Enter the number of months:\n");
    scanf("%d",&months);

    total = total_recharge(amt,months);
    printf("Total recharge amount for %d months = %d\n", months,total);
    return 0;
}