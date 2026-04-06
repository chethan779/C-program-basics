#include<stdio.h>


float calculateHRA(float basic)
{return 0.2*basic;}

float calculateDA(float basic)
{return 0.1*basic;}

float calculateGross(float basic, float hra, float da)
{return basic+hra+da;}

float calculateTax(float gross)
{return 0.05*gross;}

float calculateNet(float gross,float tax)
{return gross-tax;}



int main()
{
float basic_salary;
printf("Enter Basic Salary:");
scanf("%f",&basic_salary);
float hra=calculateHRA(basic_salary);
float da=calculateDA(basic_salary);
float gross=calculateGross(basic_salary,hra,da);
float tax=calculateTax(gross);
printf("=====================SALARY DETAILS=====================\n");
printf("Gross Salary = %.2f\n",gross);
printf("Tax = %.2f\n",calculateTax(gross));
printf("Net Salary = %.2f\n",calculateNet(gross,tax));
}