//PES1UG25AM095
#include<stdio.h>

struct Expense
{
float tpp;
int nop;
float hotel_charge;
float discount;
};

struct Booking
{
int booking_id;
char name[30];
char destination[30];
struct Expense exp;
};


int main()
{
int n;

printf("Enter number of bookings: ");
scanf("%d",&n);

struct Booking b[n];

for(int i=0;i<n;i++)
{
printf("\n\nEnter details of booking %d\n",i+1);

printf("Enter Booking ID: ");
scanf("%d",&b[i].booking_id);

printf("Enter Customer name: ");
scanf("%s",&b[i].name);

printf("Enter Destination: ");
scanf("%s",&b[i].destination);

printf("Enter Travel Fare per person: ");
scanf("%f",&b[i].exp.tpp);

printf("Enter Number of person: ");
scanf("%d",&b[i].exp.nop);

printf("Enter Hotel Charges: ");
scanf("%f",&b[i].exp.hotel_charge);

printf("Enter Discount percentage: ");
scanf("%f",&b[i].exp.discount);

}

float discount_amt[n];

printf("\n\n============Travel Booking Details==============\n\n");

for(int i=0;i<n;i++)
{
float total_fare = b[i].exp.tpp  * b[i].exp.nop;

float total_before_disount = total_fare + b[i].exp.hotel_charge;

float discounted_amt = (total_before_disount * (b[i].exp.discount/100) );
discount_amt[i] = discounted_amt;

float final_cost = total_before_disount - discounted_amt;


printf("\n\nBooking %d\n",i+1);

printf("Booking ID	: %d\n",b[i].booking_id);

printf("Customer name	: %s\n",b[i].name);

printf("Destination	: %s\n",b[i].destination);

printf("Fare per person	: %.2f\n",b[i].exp.tpp);

printf("Number of person	: %d\n",b[i].exp.nop);

printf("Hotel Charges	: %.2f\n",b[i].exp.hotel_charge);

printf("Discount percentage	: %.2f\n",b[i].exp.discount);

printf("Total Travel Fare	: %.2f\n",total_fare);

printf("Total cost Before Discount	: %.2f\n",total_before_disount);

printf("Discount Amount		: %.2f\n",discount_amt[i]);

printf("Final Tour Cost		: %.2f\n",final_cost);

if(final_cost > 50000)
	printf("Booking Category	: Premium Booking");
else
	printf("Booking Category	: Regular Booking");

}

printf("\n\n==========Customers with Discount Amount Greater Than Rs.5000==========\n");
for(int i=0;i<n;i++)
{
if(discount_amt[i] > 5000)
	{printf("Customer name	: %s\n",b[i].name);
	printf("Discount Amount		: %.2f\n",discount_amt[i]);}
}

return 0;
}