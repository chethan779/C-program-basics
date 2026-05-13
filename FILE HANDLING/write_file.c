#include<stdio.h>

int main(){
    FILE *ptr;
    char str[] = "Hey I am good\nHope ur good too";
    ptr = fopen("chethan.txt","a");
    fprintf(ptr , str);
    fclose(ptr);
    return 0;
}