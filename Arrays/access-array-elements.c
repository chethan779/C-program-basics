#include<stdio.h>

int main(){
    int numbers[7],reversenumbers[7];
    int sum;

    printf("Take array inputs from the user:\n");
    
    for (int i = 0; i < 7; i++)
    {
    printf("Enter the value of number[%d]\n",i+1);
    scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < 7; i++)
    {
    printf("The number[%d] is: %d\n",i+1,numbers[i]);
    }

    for (int i = 0; i < 7; i++)
    {
    sum+=numbers[i];
    }
    printf("The sum of the array elements present is %d: \n",sum);
    
    for (int i = 7; i >0; i--)
    {
    printf("The number[%d] is: %d\n",(7-i)+1,numbers[i]);
    // reversenumbers[7-i]=numbers[7-i]
    }


    return 0;
}