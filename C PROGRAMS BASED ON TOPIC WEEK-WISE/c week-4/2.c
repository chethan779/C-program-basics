#include<stdio.h>

int main()
{

int pin=1234,input,try=2;



while(try!=-1)
{
	printf("Enter PIN: ");
	scanf("%d",&input);

	if(input==pin)
	{
		printf("Access Granted!\n");
		break;
	}
	else if(input!=pin && try>0)
	{
		printf("Wrong PIN!. Attempts left: %d\n",try);
		try--;
	}
	else if(input!=pin && try==0)
	{
		printf("Wrong PIN!. Attempts left: %d\n",try);
		printf("Card Blocked!!");
		break;
	}
	else
	{}
}

return 0;


}