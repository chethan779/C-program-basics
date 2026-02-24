#include<stdio.h>

int main(){
    int age[4]={18,23,37};

    for (int i = 0; i < 4; i++)
    {
    printf("The value of age %d is: %d\n",i+1,age[i]);
    }

    
    return 0;
}