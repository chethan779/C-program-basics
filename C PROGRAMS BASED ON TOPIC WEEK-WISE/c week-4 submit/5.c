#include<stdio.h>

int main()
{
    int choice=1;
    float hours,rate,bill;
    int nov=0;
    float revenue=0;
    float max_bill=0,min_bill=0;

    while(choice!=0)
    {
        printf("Enter vehicle type (1=Bike,2=Car,3=SUV,4=Truck,0=Stop): ");
        scanf("%d",&choice);

        if(choice==0)
            break;

        printf("Enter hours parked: ");
        scanf("%f",&hours);

        if(choice==1)
            rate=20;
        else if(choice==2)
            rate=40;
        else if(choice==3)
            rate=60;
        else if(choice==4)
            rate=80;
        else
            {}
        bill=rate*hours;
        if(hours>6)
            bill=bill-(bill*0.15);
        nov++;
        if(nov%10==0)
            bill=bill+50;

        printf("Vehicle %d bill: %.2f\n",nov,bill);
        revenue+=bill;
        if(nov==1)
        {max_bill=bill;
            min_bill=bill;
        }
        else
        {
            if(bill>max_bill)
                max_bill=bill;

            if(bill<min_bill)
                min_bill=bill;
        }
    }

    printf("Total vehicles: %d\n",nov);
    printf("Total revenue: %.2f\n",revenue);
    printf("Maximum bill: %.2f\n",max_bill);
    printf("Minimum bill: %.2f\n",min_bill);

    return 0;
}