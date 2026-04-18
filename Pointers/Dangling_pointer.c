#include<stdio.h>

int main(){
    int a = 0;
    int *ptr = NULL; // Null pointer it points to nothing
    if(ptr == NULL){
        printf("Hey\n");
    }
    // Dangling pointer is a pointer that points to a memory location which is no longer valid

    // Wild pointer is a pointer which hasnt been assigned a value yet 

    // Void pointer is a pointer which can hold any data type 
    void *ptr2; // This pointer is ready to store address of any data type

    float b = 4.22;
    ptr2 = &b;
    printf("The value at ptr is %f\n", *((float*)ptr2) );
    return 0;
}