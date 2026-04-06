#include<stdio.h>


int main()
{
int num,limit,threshold,sum=0,count=0,max=0;

printf("Enter the base number: ");
scanf("%d",&num);

printf("Enter  the limit: ");
scanf("%d",&limit);

printf("Enter the threshold value : ");
scanf("%d",&threshold);

for(int i=1;i<=limit;i++)
{
printf("%d X %d = %d\n",num,i,num*i);
sum+=num*i;
	
//*********************************************************************	
	{if(threshold<num*i)
		{count++;}
	else
	{}
	}

//**********************************************************************
	{if(max<num*i)
		{max=num*i;}
	}

}
printf("============Summary================\n");
printf("Total Sum = %d\n",sum);
printf("Results greater than %d = %d\n",threshold,count);
printf("Max result = %d",max);
return 0;



}