#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "CodeWithChethan" ;
    char destination[50];

    strcpy(destination,source);
    printf("The source string is: %s\n", source);
    printf("The destination string is: %s\n", destination);
    printf("The size of destination: %d\n",sizeof(destination) );
    return 0;
}