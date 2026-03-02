#include <stdio.h>
 
int main() {
    int arr[] = {10,20,30};
    int *ptr=arr; // same as &arr[0]

    printf("The first element is %d\n",*ptr);
    ptr++;
    printf("The second element is %d\n",*ptr);
    ptr--;
    printf("The third element is %d\n",*ptr);
    
    return 0;
}