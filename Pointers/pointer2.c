#include<stdio.h>

int main(){
    int a=3;
    int *p=&a; 
    int **ptr=&p;

    printf("The value of a is : %d\n", a);
    printf("The value of a is : %d\n", *p);
    printf("The address of a is : %p\n", &a);
    printf("The address of p is : %p\n", p);
    printf("The address of p is : %p\n", ptr);


    return 0;
}