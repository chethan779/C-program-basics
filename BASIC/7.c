#include<stdio.h>

int main(){
    int age,citizen,eligible;
    printf("Enter ur age here: \n");
    scanf("%d", &age);

    printf("R u a citizen(1 for yes and 0 for no):\n");
    scanf("%d", &citizen);

    eligible = (age>=18) && (citizen==1);
    printf("%d\n",eligible);
    return 0;
}