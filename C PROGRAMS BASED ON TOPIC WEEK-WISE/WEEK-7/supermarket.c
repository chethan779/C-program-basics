#include<stdio.h>

int total_items(int *ptr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum = sum + *(ptr+i);
    return sum;
}

int highest_items(int *ptr,int n)
{
    int max = *ptr;
    for(int i=1;i<n;i++)
    {
        if(*(ptr+i) > max)
            max = *(ptr+i);
    }
    return max;
}

int lowest_items(int *ptr,int n)
{
    int min= *ptr;
    for(int i=1;i<n;i++)
    {
        if(*(ptr+i) < min)
            min = *(ptr+i);
    }
    return min;
}

int main()
{
    int n;
    printf("Enter the number of billing counters:\n");
    scanf("%d",&n);
    int billing_counters[n],total,high,low;

    printf("Enter the number of items sold at each counter:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&billing_counters[i]);

    total = total_items(billing_counters,n);
    high = highest_items(billing_counters,n);
    low = lowest_items(billing_counters,n);

    printf("\nSales Analysis Report\n");
    printf("Total items sold: %d\n",total);
    printf("Highest items sold: %d\n",high);
    printf("Lowest items sold: %d\n",low);
    return 0;
}