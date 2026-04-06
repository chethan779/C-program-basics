#include<stdio.h>

int main()
{	
	int n,odd=0,even=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	int array[n];

	printf("Enter %d integers:\n",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&array[i]);

		if(array[i]%2==0) 
			even+=1;
		else if(array[i]%2!=0) 
			odd+=1;
		else {}
	}


	printf("Number of Even numbers = %d\n",even);
	printf("Number of Odd numbers = %d\n",odd);

	return 0;
}