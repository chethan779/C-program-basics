#include<stdio.h>
#include<string.h>
int main(){
    char first[50] = "CodeWith" ;
    char second[]="Chethan";

    strcat(first,second);
    printf("The combined string is: %s\n", first);
    return 0;
}