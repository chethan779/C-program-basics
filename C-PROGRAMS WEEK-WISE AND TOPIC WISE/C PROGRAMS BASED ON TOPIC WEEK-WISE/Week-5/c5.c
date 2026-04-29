#include<stdio.h>

int main()
{
	int matrix[3][3],row_sum=0,col_sum=0,diagonal_sum=0,sec_diagonal_sum=0;

	printf("Enter elements of 3X3 matrix:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Element[%d][%d]:  ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("THE MATRIX IS:\n");

	for(int i=0;i<3;i++)
	{printf("\n");
		for(int j=0;j<3;j++)
		{
			printf("%d ",matrix[i][j]);
		}
	}
	printf("\n");
	printf("Sum of each row:\n");
	for(int i=0;i<3;i++)
	{
	 row_sum=0;
		for(int j=0;j<3;j++)
		{
			row_sum+=matrix[i][j];
		}
		printf("Row %d sum = %d\n",i+1,row_sum);
	}

	printf("\n");

	printf("Sum of each column:\n");
	for(int j=0;j<3;j++)
	{
	
	 col_sum=0;
		for(int i=0;i<3;i++)
		{
			col_sum+=matrix[i][j];
					
		}
		printf("Row %d sum = %d\n",j+1,col_sum);
	}

	for(int i=0;i<3;i++)
		{
			diagonal_sum+=matrix[i][i];
			sec_diagonal_sum+=matrix[i][2-i];
		}
	printf("\n");

	printf("Sum of main diagonal elements = %d\n",diagonal_sum);
	printf("Sum of secondary diagonal elements = %d\n",sec_diagonal_sum);
	
	return 0;

}