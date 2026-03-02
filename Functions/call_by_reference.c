#include <stdio.h>



int main() {
    int a = 56 , b=55;
    // & --> adress operator
    printf("The address of a is %d\n", &a);
    printf("The address of b is %d\n", &b);
    

    // * -----> (value at) operator
    printf("The value at adress a is %d\n",*(&a));
    printf("The value at adress b is %d\n",*(&b));
    return 0;
}
