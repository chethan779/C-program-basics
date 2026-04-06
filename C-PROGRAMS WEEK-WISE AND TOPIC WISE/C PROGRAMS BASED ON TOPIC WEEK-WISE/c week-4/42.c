 #include<stdio.h>
int main()
{
double p,r,E,outstanding,total_interest=0,total_penalty=0;

int N,month=0;

printf("Enter the principal amount: ");
scanf("%lf",&p);

printf("Enter the monthly interest: ");
scanf("%lf",&r);

printf("Enter the emi: ");
scanf("%lf",&E);

printf("Enter the maximum months");
scanf("%d",&N);

outstanding=p;

while(outstanding>0 && month<N)
{	month++;
	double interest=outstanding*r/100;
	total_interest+=interest;
	double payment=E;
	if(payment<interest){
		total_penalty+=200;
		payment-=200;
		}
	outstanding=outstanding+interest-payment;
	printf("month %d outstanding %.2f\n",month,outstanding>0?outstanding:0);
}
	printf("total interest %d",total_interest);
	printf("total penalty %d",total_penalty);

	if( outstanding<=0)
		{printf("loan status: closed");
		}
	else
		printf("remaining P: %.2f",outstanding);
		
return 0;
}
