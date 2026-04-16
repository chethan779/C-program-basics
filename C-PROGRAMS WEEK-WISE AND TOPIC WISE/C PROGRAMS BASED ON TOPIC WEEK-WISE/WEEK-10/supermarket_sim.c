#include<stdio.h>

struct supermarket_sim
{
    int code;
    char name[20];
    int quantity;
    float price_per_unit;
    float percentage;

};



int main(){
    struct supermarket_sim s1;
    printf("Enter item code: ");
    scanf("%d",s1.code);
    printf("Enter item name: ");
    scanf("%d",s1.name);
    printf("Enter quantity: ");
    scanf("%d",s1.quantity);
    printf("Enter price per unit: ");
    scanf("%d",s1.price_per_unit);
    printf("Enter discount perccentage: ");
    scanf("%d",s1.percentage);

    printf("-----Item Details--------");
    printf("Item Code : %d\n",s1.code);
    printf("Item name : %d\n",s1.name);
    printf("Quantity : %d\n",s1.quantity);
    printf("Price per unit : %d\n",s1.price_per_unit);
    printf("Discount percentage: %d\n",s1.percentage);

    printf("---Billing Details----");
    
    
    return 0;
}