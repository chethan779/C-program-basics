#include<stdio.h>

void greet();
float average(int x, int y);

int main(){
    int a=8,b=19;


    printf("The average is %.2f\n",average(a,b));
    greet();
    greet();

    return 0;
}

void greet()
{
    printf("Hello Good Morning!!!\n");
    printf("Thank You\n");
}

float average(int x, int y)
{
    return (x+(float)y)/2;
}