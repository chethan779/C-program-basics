#include<stdio.h>

int main(){
    int a ,b ;
    printf("Enter 2 numbers :  ");
    scanf("%d %d", &a,&b);

    printf("Sum = %d\n", a+b);
    printf("Difference= %d\n", a-b);
    printf("product = %d\n", a*b);
    printf("Quotient = %d\n", a/b);
    printf("Remainder = %d\n", a%b);
    return 0;
}