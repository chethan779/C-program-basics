#include<stdio.h>

float calculateIncome(float reg_fees,float spons_amt,float stall_rent)
{return ((reg_fees*15)+spons_amt+stall_rent);}

float calculateVolunteerExpense(float No_of_volunteer)
{return No_of_volunteer*200;}

float calculateTotalExpense(float stage_setup,float guest_payment,float marketing_expense,float volunteer_expense)
{return stage_setup+guest_payment+marketing_expense+volunteer_expense;}

float ProfitOrLoss(float income,float expense)
{return income-expense;}

int main()
{
float reg_fees,spons,stall,stage,guest,marketing,volunteers,prof_or_loss;


printf("Registration :");
scanf("%f",&reg_fees);

printf("Sponsorship:");
scanf("%f",&spons);

printf("Stall Rent:");
scanf("%f",&stall);

printf("Stage setup:");
scanf("%f",&stage);

printf("Guest payment:");
scanf("%f",&guest);

printf("Marketing:");
scanf("%f",&marketing);

printf("Volunteers:");
scanf("%f",&volunteers);

float total_income=calculateIncome(reg_fees,spons,stall);
float volunteer_expense=calculateVolunteerExpense(volunteers);
float total_expenditure=calculateTotalExpense(stage,guest,marketing,volunteer_expense);

prof_or_loss=ProfitOrLoss(total_income,total_expenditure);



printf("Total income: %.2f\n",total_income);
printf("Total Expense: %.2f\n",total_expenditure);

if(prof_or_loss<0)
	printf("Loss: %.2f",prof_or_loss);
else
	printf("Profit: %.2f",prof_or_loss);

}