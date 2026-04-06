#include<stdio.h>

float total_fee_collection(int child[10])
{

	int total=0;
	for(int i=0;i<10;i++)
		total+=child[i];

	return total;

}

int total_salary_expenditure(int managers,int senior_caretaker,int assistant_caretaker)
{return managers*45000+senior_caretaker*30000+assistant_caretaker*15000;}

float total_additional_expense(float maintainance,float prizes)
{return maintainance+prizes;}

int main()
{
int manager,sen_care,assist_care;
float maintainance,prize;
int child[10];
printf("Enter fee paid by 10 children:\n");
for(int i=0;i<10;i++)
	{printf("Child %d Fee: ",i+1);
	scanf("%d",&child[i]);}

printf("Enter number of managers: ");
scanf("%d",&manager);

printf("Enter number of Senior Caretakers: ");
scanf("%d",&sen_care);

printf("Enter number of Assistant Caretakers: ");
scanf("%d",&assist_care);

printf("Enter maintenance: ");
scanf("%f",&maintainance);

printf("Enter total cash prizes for top performing children: ");
scanf("%f",&prize);
float total_fee=total_fee_collection(child);
float total_salary=total_salary_expenditure(manager,sen_care,assist_care);
float total_additional= total_additional_expense(maintainance,prize);
printf("============Play Area Budget Summary============\n");
printf("Total Fee collection = %.2f\n",total_fee);
printf("Total Salary Expenditure = %.2f\n",total_salary);
printf("Total additional expense = %.2f\n",total_additional);

float rem_balance=total_fee-(total_salary+total_additional);
printf("Final Remaining Balance = %.2f\n",rem_balance);

}