//PES1UG25AM095

#include<stdio.h>
#include<string.h>
int main()
{
char first_name[50],last_name[50],full_name[100];

printf("Enter the first name of student: ");
scanf("%s",first_name);


printf("Enter the last name of the student: ");
scanf("%s",last_name);

strcpy(full_name,first_name);
strcat(full_name," ");
strcat(full_name,last_name);

printf("The full name of student is : %s\n",full_name);
printf("Length of full name is: %d\n",strlen(full_name));
char copied_name[100];
strcpy(copied_name,full_name);

printf("The copied name of student is : %s\n",copied_name);

char another_full_name[100];

printf("Enter another name of student: ");
getchar(); 
scanf("%[^\n]", another_full_name);

if(strcmp(copied_name,another_full_name)==0)
{printf("Both names are same");}
else
{printf("Both names are different");}

}