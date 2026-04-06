#include<stdio.h>

int main()
{
	int electricity[6],units=0,count=0;
	float avg_consumption;

	printf("Enter electricity units consumed by 6 houses:\n");

	for(int i=0;i<6;i++)
	{
		printf("House %d: ",i+1);
		scanf("%d",&electricity[i]);

		units+=electricity[i];

		if(electricity[i]>300) 
			count+=1;
		else{}	
	
	}

	avg_consumption=(float)units/6;

	printf("Total units consumed = %d\n",units);
	printf("Average consumption = %.2f\n",avg_consumption);
	printf("Number of houses consuming more than 300 units = %d\n",count);

	return 0;
}