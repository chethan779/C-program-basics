#include<stdio.h>

int main(){
    char str[]="Codewithchethan" ;
    int count=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        printf(" %c\n", str[i]);
        count+=1;

    }
    printf("The length of str is: %d\n",count);

    return 0;
}