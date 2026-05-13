#include<stdio.h>

int main(){
    FILE *ptr;
    
    ptr = fopen("chethan.txt","r");

    if(ptr == NULL){
        printf("There was a problem opening this file!!!!");
        return 1;
    }


    char ch;
    while( (ch=fgetc(ptr)) != EOF){
    printf("%c",ch);
    }
    // OR
    while (!feof(ptr)) {
    ch = fgetc(ptr);
    printf("%c", ch);
    }

    return 0;
}