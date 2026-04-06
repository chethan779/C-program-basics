#include<stdio.h>

int avg_stock(int n,int array[n])
{	int sum=0;
	printf("Enter stock of %d books:\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	int *ptr=array;
	for(int i=0;i<n;i++)
	{
		sum+=*ptr;
		ptr++;	
	}

	return sum/n;

}


int main()
{
int n;
printf("Enter number of books:");

scanf("%d",&n);
printf("%d\n",n);
int books[n];

float avg=avg_stock(n,books);
printf("Average stock of books = %.2f", avg);
}