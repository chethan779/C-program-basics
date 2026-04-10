//PES1UG25AM095


#include<stdio.h>
#include<stdlib.h>

int main()
{
int old_n;
float total=0;
float* expense;
printf("Enter number of months: ");
scanf("%d",&old_n);

expense=(float *)malloc(old_n*sizeof(float));
if(expense==NULL)
{
printf("Memory allocation failed!!!!\n");
free(expense);
return 1;
}

printf("Enter the expense for %d months:\n",old_n);
for(int i=0;i<old_n;i++)
{
scanf("%f",(expense+i));
total+=*(expense+i);
}
printf("Expenses entered are:\n");
for(int i=0;i<old_n;i++)
{
printf("Month %d: %.2f\n",i+1,*(expense+i));
}
printf("Total expense for %d months = %.2f\n",old_n,total);
int new_n,extra_n;
printf("\nEnter new total number of elements: ");
scanf("%d",&new_n);
extra_n=new_n-old_n;
float *new_expense;

new_expense=(float *)realloc(expense,new_n*sizeof(float));
if(new_expense==NULL)
{
printf("Memory allocation failed!!!!\n");
free(new_expense);
return 1;
}
expense=NULL;
printf("Enter the expense for additional %d months\n",extra_n);
for(int i=old_n;i<new_n;i++)
{
scanf("%f",(new_expense+i));
total+=*(new_expense+i);
}
printf("Updated list of expenses:\n");
for(int i=0;i<new_n;i++)
{
printf("Month %d: %.2f\n",i+1,*(new_expense+i));
}
printf("New total expense for %d months = %.2f\n",new_n,total);
free(new_expense);
new_expense=NULL;
free(expense);
printf("\n\nMemory deallocated successfully using free()");

return 0;
}