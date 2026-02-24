#include<stdio.h>

int main(){
    int x=10;
    int *p=&x; // stores address of x in p
    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    printf("*p = %p\n", *p);

    return 0;
}