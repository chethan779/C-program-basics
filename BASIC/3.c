#include<stdio.h>

int main()

{
int a , b , temp;

printf("Enter ur first number here: \n");
scanf("%d",&a);

printf("Enter ur second number here: \n");
scanf("%d",&b);
printf(" Before The swapped numbers look like : %d\t%d\n",a,b);
temp=a;
a=b;
b=temp;

printf("The swapped numbers look like : %d\t%d\n",a,b);


return 0;


}