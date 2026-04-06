#include <stdio.h>

int main()
{
    int n, find, pos = -1;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search:\n");
    scanf("%d", &find);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == find)
        {
            pos = i + 1;
            break;
        }
    }

    if(pos != -1)
        printf("Element found at position %d\n", pos);
    else
        printf("Element not found\n");

    return 0;
}