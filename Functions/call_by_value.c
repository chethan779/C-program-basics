#include<stdio.h>

int sum(int a,int b);
int main(){
    int x=3,y=7;

    printf("The sum of x and y is %d\n",sum(x,y));
    printf("After calling sum , x = %d and y = %d\n",x,y);
    return 0;
}

int sum(int a,int b) // a and b r copies
{
    int result=a+b;
    a=69,b=67; 
    /*As x and y replaces a and b so initializing 
    the values of  and b will not change the 
    values of x and y after calling  the function
    */
    return result;
}