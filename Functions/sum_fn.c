#include<stdio.h>

float sum(int a,int b);
int main(){
    int x,y;
    printf("Enter value of x\n");
    scanf("%d",&x);
    
    printf("Enter value of b\n");
    scanf("%d",&y);

    printf("The sum of x and y is %.2f\n",sum(x,y));
    
    return 0;
}

float sum(int a,int b)
{
    return (float)a+b;
}