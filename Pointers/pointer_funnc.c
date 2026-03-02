#include<stdio.h>
int changeValue(int *ptr);
int main(){
    int a=32;
    printf("The value of a is %d\n",a);
    changeValue(&a);
    printf("The value of a is %d\n",a);

    return 0;
}

int changeValue(int *ptr)
{
    // ptr is address so i need to dereference it
    *ptr=67;
}