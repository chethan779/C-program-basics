//PES1UG25AM095
#include<stdio.h>

int main()
{
char first_name[50],last_name[50],full_name[100];
char *ptr1,*ptr2,*ptr3;
int count=0;
ptr3=full_name;
printf("Enter the first name of student: ");
scanf("%s",first_name);
ptr1=first_name;


printf("Enter the last name of the student: ");
scanf("%s",last_name);
ptr2=last_name;

while(*ptr1!='\0')
{
	*ptr3=*ptr1;
	ptr1++;
	ptr3++;
	count++;
	
}

*ptr3=' ';
ptr3++;
count++;

while(*ptr2!='\0')
{
	*ptr3=*ptr2;
	ptr2++;
	ptr3++;
	count++;

}
*ptr3='\0';
printf("%s\n",full_name);
printf("Number of characters in the full name is %d",count);
}