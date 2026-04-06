#include<stdio.h>

int main()
{
	int seats[5][4],booked=0,available=0,total;

	printf("Enter seat availability(1=Booked,0=Available)");

	for(int i=0;i<5;i++)
	{printf("Row %d:\n",i+1);
	for(int j=0;j<4;j++)
		{
			printf("Seat %d: ",j+1);
			scanf("%d",&seats[i][j]);

			if(seats[i][j]==0)
				available+=1;
			else if(seats[i][j]==1)
				booked+=1;
			else{}
		}
	}
	printf("Seat Available Matrix:\n");
	for(int i=0;i<5;i++)
	{printf("\n");
		for(int j=0;j<4;j++)
		{
			printf("%d ",seats[i][j]);
		}
	}
	printf("\n");
	
	printf("Total Booked Seats = %d\n",booked);
	printf("Total Available Seats = %d\n",available);

	return 0;
}