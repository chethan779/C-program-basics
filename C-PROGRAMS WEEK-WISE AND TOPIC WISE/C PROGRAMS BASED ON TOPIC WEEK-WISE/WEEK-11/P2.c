//PES1UG25AM095
#include <stdio.h>
#include <string.h>

struct Consumer {
    int cno;
    char name[50];
    float units;
};

void calculateBill(int cno, char name[], float units);

int main() {
    struct Consumer c1;

    printf("Enter Consumer Number: ");
    scanf("%d", &c1.cno);

    printf("Enter Consumer Name: ");
    getchar();
    scanf("%[^\n]", c1.name);

    printf("Enter Units Consumed: ");
    scanf("%f", &c1.units);

    calculateBill(c1.cno, c1.name, c1.units);

    return 0;
}

void calculateBill(int cno, char name[], float units) {
    float bill_amt = 0;
    float surcharge = 0;
    float final_bill = 0;

    if (units <= 100) {
        bill_amt = units * 2.00;
    } else if (units <= 200) {
        bill_amt = (100 * 2.00) + ((units - 100) * 3.50);
    } else {
        bill_amt= (100 * 2.00) + (100 * 3.50) + ((units - 200) * 5.00);
    }

    if (bill_amt > 1000) {
        surcharge = bill_amt * 0.10;
    } else {
        surcharge = 0;
    }

    final_bill = bill_amt + surcharge;

    printf("\nElectricity Bill Details\n");
    printf("Consumer Number : %d\n", cno);
    printf("Consumer Name   : %s\n", name);
    printf("Units Consumed  : %.2f\n", units);
    printf("Bill Amount     : %.2f\n", bill_amt);
    printf("Surcharge       : %.2f\n", surcharge);
    printf("Final Bill      : %.2f\n", final_bill);
}