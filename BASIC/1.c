#include<stdio.h>

int main()
{
int age;
char grade;
    printf("Enter ur Age here: \n");  
    scanf("%d", &age);

    printf("Enter ur Grade here: \n");  
    scanf(" %c",&grade);

    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);

}