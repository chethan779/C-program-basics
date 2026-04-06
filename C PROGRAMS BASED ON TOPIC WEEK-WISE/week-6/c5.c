#include <stdio.h>

int getRate(int type)
{
    if(type == 1)
        return 20;
    else if(type == 2)
        return 40;
    else if(type == 3)
        return 60;
    else
        return 0;
}

float calculateBill(int *hours, int rate, int n)
{
    float total = 0;
    int *ptr=hours;

    for(int i = 0; i < n; i++)
        total+= (*(ptr+i)) * rate;
    
    return total;
}

void  displayBills(int *hours, int *type, int n)
{
    float bill,totalRevenue = 0,max_bill = 0;
    int max_vehicle = 0;

    char *names[]={"Bike", "Car", "SUV"};

    printf("\n----- Parking Bill Report -----\n");

    for(int i = 0; i < n; i++)
    {
        int rate = getRate(type[i]);
        bill = hours[i] * rate;

        printf("Vehicle %d (%s): Hours = %d, Bill = %.2f\n",i+1, names[type[i]-1], hours[i], bill);

        totalRevenue += bill;

        if(bill > max_bill)
        {
            max_bill = bill;
            max_vehicle = i;
        }
    }
    printf("Total Revenue = %.2f\n", totalRevenue);
    printf("Maximum Bill Paid By Vehicle %d (%s) = %.2f\n",max_vehicle+1, names[type[max_vehicle]-1], max_bill);
}

int main()
{
    int n, threshold, count = 0;
    printf("Enter number of vehicles: ");
    scanf("%d", &n);

    int hours[n], type[n];

    printf("Enter details of each vehicle:\n");
    for(int i = 0; i < n; i++)
    {
        printf("Vehicle %d type: ", i+1);
        scanf("%d", &type[i]);

        printf("Vehicle %d hours: ", i+1);
        scanf("%d", &hours[i]);
    }
    int *ptr[n];

    for(int i = 0; i < n; i++)
        ptr[i] = &hours[i];
    

    printf("Enter threshold hours: ");
    scanf("%d",&threshold);
    
    displayBills(hours, type, n);
    for(int i = 0; i < n; i++)
    {
        if(*ptr[i] > threshold)
            count++;
    
    }
    printf("Vehicles parked more than %d hours = %d\n", threshold, count);
    return 0;
}