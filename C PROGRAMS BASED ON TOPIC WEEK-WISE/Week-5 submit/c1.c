#include<stdio.h>

int main()
{
	float daily_expense[7],total_expense=0;
	int count=0;

	printf("Enter expense for 7 days:\n");

	for(int i=0 ; i< 7;i++)
	{
		printf("Day %d: ",i+1);
		scanf("%f",&daily_expense[i]);
		total_expense+=daily_expense[i];
		
		if(daily_expense[i]>1000)
			count+=1;
		else{}
	}

	printf("Total expense = %.2f\n",total_expense);
	printf("Number of days expense was above 1000 = %d\n",count);

	return 0;



}