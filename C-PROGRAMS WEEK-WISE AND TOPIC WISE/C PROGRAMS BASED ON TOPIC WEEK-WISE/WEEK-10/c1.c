//PES1UG25AM095
#include<stdio.h>
#include<string.h>

struct supermarket_sim
{
    int code;
    char name[20];
    int quantity;
    float ppu;
    float discount;
};

int main()
{
    struct supermarket_sim s1;

    printf("Enter item code: ");
    scanf("%d", &s1.code);

    printf("Enter item name: ");
    getchar();
    scanf("%[^\n]", s1.name);

    printf("Enter quantity: ");
    scanf("%d", &s1.quantity);

    printf("Enter price per unit: ");
    scanf("%f", &s1.ppu);

    printf("Enter discount percentage: ");
    scanf("%f", &s1.discount);

    printf("\n---- Item Details -----\n");
    printf("Item Code: %d\n", s1.code);
    printf("Item Name: %s\n", s1.name);
    printf("Quantity: %d\n", s1.quantity);
    printf("Price Per Unit: %.2f\n", s1.ppu);
    printf("Discount Percentage: %.2f\n", s1.discount);

    float total_cost = s1.ppu * s1.quantity;
    float discount_amt = total_cost * (s1.discount / 100);
    float final_amt = total_cost - discount_amt;

    printf("\n--- Bill Details -----\n");
    printf("Total Cost: %.2f\n", total_cost);
    printf("Discount Amount: %.2f\n", discount_amt);
    printf("Final Bill Amount: %.2f\n", final_amt);

    return 0;
}