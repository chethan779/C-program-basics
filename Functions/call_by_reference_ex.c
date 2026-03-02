#include<stdio.h>

int sum(int* a,int* b);
int main(){
    int x=3,y=65;

    printf("We r passing %d and %d to sum fn.\n",&x,&y);
    printf("The sum of x and y is %d\n",sum(&x,&y));
    printf("After calling sum , x = %d and y = %d\n",x,y);
    return 0;
}

int sum(int* a,int* b) // a and b r copies
{
    int result;
    result=*a+*b;
    *a=556; 
    /*
    a has address of x as value .
    and has its own address.
    but when u do *a=556
    *a means vale at i.e a=&x right 
    so goes to &x and changes it to 556.
    so changes value.
    But in normal like no pointer if u do
    a=556; it will not work as a is different
    variable only no pointing at &x and changing
    or anything else.
    
    */

    return result;
}