#include<stdio.h>
void greet();
int sum(int a,int b);
int main(){
    int n,x,y;
    printf("How many times u need greetings\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
       greet();
    }
    
    return 0;
}

void greet()
{
    printf("Good Morning!!\n");
}

int sum(int a,int b)
{
    return a+b;
}