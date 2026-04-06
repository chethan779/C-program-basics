#include<stdio.h>
int main()
{
double p,r,e,outstanding,totalint=0,totalpen=0;
int n,month=0;
printf("enter the principal amount");
scanf("%lf",&p);
printf("enter the monthly interest");
scanf("%lf",&r);
printf("enter the emi");
scanf("%lf",&e);
printf("enter the maximum months");
scanf("%d",&n);
outstanding=p;
while(outstanding>0 && month<n)
{month++;
double interest=outstanding*r/100;
totalint+=interest;
double payment=e;
if(payment<interest){
totalpen+=200;
payment-=200;
}
outstanding=outstanding+interest-payment;
printf("month %d outstanding %.2f\n",month,outstanding>0?outstanding:0);
}
printf("total interest",totalint);
printf("total penalty",totalpen);
if( outstanding<=0)
{printf("loan status: closed");
}
else
{printf("remaining P: %.2f",outstanding);
}
return 0;
}
