#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "Hello" ;
    char str2[]="Hello";
    char str3[]="World";

    printf("The comparision result into %d\n", strcmp(str1,str2));
    printf("The comparision result into %d\n", strcmp(str1,str3));

    return 0;
}

/*
    0 -> equal
    <0 -> first<second
    >0 -> first>second

*/