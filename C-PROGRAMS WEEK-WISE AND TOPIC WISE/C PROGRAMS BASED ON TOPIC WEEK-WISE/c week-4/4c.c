#include <stdio.h>

int main()
{
    float p, r, E, outstanding, total_interest_paid = 0, total_penalty = 0,payment,interest,interest_paid;
    int N, month = 0;

    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the monthly interest: ");
    scanf("%f", &r);

    printf("Enter the EMI: ");
    scanf("%f", &E);

    printf("Enter the maximum months: ");
    scanf("%d", &N);

    outstanding = p;

    while (outstanding > 0 && month < N)
    {
    month++;

        interest = outstanding * r / 100;
        payment = E;

        if (payment < interest)
        {
            total_penalty += 200;
            payment -= 200;
        }
        interest_paid = (payment >= interest) ? interest : payment;
        total_interest_paid += interest_paid;

        outstanding = outstanding + interest - payment;
        if (outstanding < 0)
            outstanding = 0;

        printf("Month %d outstanding: %.2f\n", month, outstanding);
    }

    printf("\nTotal interest paid: %.2f\n", total_interest_paid);
    printf("Total penalty: %.2f\n", total_penalty);
    printf("Months processed: %d\n", month);

    if (outstanding <= 0)
        printf("Loan status: Closed\n");
    else
        printf("Loan not closed within given months\n");

    return 0;
}