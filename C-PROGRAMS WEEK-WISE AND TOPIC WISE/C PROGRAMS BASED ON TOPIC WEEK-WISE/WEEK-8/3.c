//PES1UG25AM095
#include<stdio.h>

int main()
{
	char password[]="PES123";
	char input_password[50];
	int flag=0;
	printf("Enter the password: ");
	scanf("%s",input_password);

	
	char *ptr1,*ptr2;
	ptr1=password;
	ptr2=input_password;
	
	while(*ptr1!='\0' || *ptr2!='\0')
	{
		if(*ptr1==*ptr2)
		{
			flag=1;
		}
		else
		{printf("PASSWORD did not match . Acess denied.");
		 return 0;
		}
		ptr1++;
		ptr2++;
	}

	if(*ptr1=='\0' && *ptr2!='\0' || *ptr1!='\0' && *ptr2=='\0')
	printf("PASSWORD did not match . Acess denied.");
	else if(flag==0)
	{printf("PASSWORD did not match . Acess denied.");}
	else if(flag==1)	
	{printf("PASSWORD did matches . Acess granted.");}

}