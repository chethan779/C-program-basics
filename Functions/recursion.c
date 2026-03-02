#include<stdio.h>

int factorial(int n);

int main(){
    int x;
    printf("Enter ur no. here for factorial\n");
    scanf("%d",&x);

    printf("%d ! = %d\n",x,factorial(x));

    return 0;
}

int factorial(int n)
{
    // n! = n * (n-1)!
    if(n==0 || n==1) {return 1;}
    
    return n * factorial(n-1);

}