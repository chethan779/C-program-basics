#include <stdio.h>

void linear_search(int arr[], int n, int find)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == find)
        {
            printf("Element found at position %d\n", i + 1);
            count++;
        }
    }

    if(count == 0)
        printf("Element not found\n");
    else if(count > 1)
        printf("Element occurs %d times\n", count);
}

int main()
{
    int n, find;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search:\n");
    scanf("%d", &find);

    linear_search(arr, n, find);

    return 0;
}