//PES1UG25AM095
#include<stdio.h>
#include<string.h>

struct patient
{
    int id;
    char name[20];
    int age;
    char disease[20];
    int days_admit;
    int tcpd;
};

int main()
{
    struct patient p1;

    printf("Enter patient ID: ");
    scanf("%d", &p1.id);

    printf("Enter patient name: ");
    getchar();
    scanf("%[^\n]", p1.name);

    printf("Enter patient age: ");
    scanf("%d", &p1.age);

    printf("Enter patient Disease: ");
    getchar();
    scanf("%[^\n]", p1.disease);

    printf("Enter number of days admitted: ");
    scanf("%d", &p1.days_admit);

    printf("Enter treatment charge per day: ");
    scanf("%d", &p1.tcpd);

    printf("\n--- Patient Details ---\n");
    printf("Patient ID: %d\n", p1.id);
    printf("Patient Name: %s\n", p1.name);
    printf("Patient Age: %d\n", p1.age);
    printf("Patient Disease Name: %s\n", p1.disease);
    printf("Days Admitted: %d\n", p1.days_admit);
    printf("Treatment Charge per Day: %d\n", p1.tcpd);

    float total_cost = p1.tcpd * p1.days_admit;
    float discount_amt = 0;
    float extra_charge = 0;

    if(p1.age > 60)
        discount_amt = total_cost * 0.1;

    if(p1.days_admit > 7)
        extra_charge = 2000;

    float final_amt = total_cost + extra_charge - discount_amt;

    printf("\n--- Bill Details ---\n");
    printf("Total Treatment Cost: %.2f\n", total_cost);
    printf("Discount Amount: %.2f\n", discount_amt);
    printf("Extra Medical Charges: %.2f\n", extra_charge);
    printf("Final Hospital Bill: %.2f\n", final_amt);

    return 0;
}