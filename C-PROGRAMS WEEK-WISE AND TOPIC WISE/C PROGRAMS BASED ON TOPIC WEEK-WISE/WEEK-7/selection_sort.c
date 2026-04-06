#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    int array[n],min=0,temp;

    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&array[i]);

    printf("\nArray before sorting:\n");
    for(int i=0;i<n;i++)
        printf("%d ",array[i]);

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[min])
                min=j;
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }

    printf("\n\nArray after sorting in ascending order:\n");

    for(int i=0;i<n;i++)
        printf("%d ",array[i]);

    return 0;
}