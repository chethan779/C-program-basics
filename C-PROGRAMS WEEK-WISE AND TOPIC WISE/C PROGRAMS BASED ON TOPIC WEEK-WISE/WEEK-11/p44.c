//PES1UG25AM095
#include<stdio.h>

struct Employee
{
int emp_id;
char name[30];
int projects;
float performance_score;
};

int main()
{
int n;

printf("Enter number of Employees: ");
scanf("%d",&n);

struct Employee emp[n];

struct Employee *ptr = emp;

for(int i=0;i<n;i++)
{
printf("\n\nEnter details of Employee %d\n",i+1);

printf("Enter Employee ID: ");
scanf("%d",&(ptr + i)->emp_id);

printf("Enter Employee name: ");
scanf("%s",(ptr + i)->name);

printf("Enter Number of projects completed: ");
scanf("%d",&(ptr + i)->projects);

printf("Enter Performance Score: ");
scanf("%f",&(ptr + i)->performance_score);

}

printf("\n\n============Employee Details==============\n\n");

for(int i=0;i<n;i++)
{

printf("Employee %d\n",i+1);

printf("Employee ID	: %d\n",(ptr + i)->emp_id);

printf("Employee name	: %s\n",(ptr + i)->name);

printf("Projects Completed	: %d\n",(ptr + i)->projects);

printf("Performance Score	: %.2f\n",(ptr + i)->performance_score);

}

printf("\n\n=================Employees with More than 5 projects================\n");
for(int i=0;i<n;i++)
{
if((ptr + i)->projects > 5)
	{
	printf("Employee ID: %d , ",(ptr + i)->emp_id);
	printf("Employee name: %s , ",(ptr + i)->name);
	printf("Projects Completed: %d\n",(ptr + i)->projects);
	}

}
printf("\n\n=================Employees with Performance Score >=8.0================\n");
for(int i=0;i<n;i++)
{
if((ptr + i)->performance_score > 8)
	{
	printf("Employee ID: %d , ",(ptr + i)->emp_id);
	printf("Employee name: %s , ",(ptr + i)->name);
	printf("Performance Scored: %.2f\n",(ptr + i)->performance_score);
	}

}
}