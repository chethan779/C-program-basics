#include<stdio.h>

int main()
{
int p,r,E,month=0,n,totalint,totalpen,payment,outstanding;

printf("Enter Principal(P): ");
scanf("%d",&p);

printf("Enter Monthly Interest Rate (r in %): ");
scanf("%d",&r);

printf("Enter EMI (E): ");
scanf("%d",&E);

printf("Enter Max Months (N): ");
scanf("%d",&n);
outstanding=p;
while(outstanding>0 && month<n)
{month++;
double interest=outstanding*r/100;
totalint+=interest;
double payment=E;
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











