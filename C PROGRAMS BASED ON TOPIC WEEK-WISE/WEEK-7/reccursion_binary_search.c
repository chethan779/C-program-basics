#include<stdio.h>

int binary_search(int a[],int low,int high,int find)
{
    int mid;

    if(low>high)
        return -1;
    mid=(low+high)/2;

    if(a[mid]==find)
        return mid;

    else if(find<a[mid])
        return binary_search(a,low,mid-1,find);
    else
        return binary_search(a,mid+1,high,find);
}

int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    int numbers[n],find,pos;

    printf("Enter the array elements in ascending order:\n");

    for(int i=0;i<n;i++)
        scanf("%d",&numbers[i]);

    printf("\nEnter the element to search:\n");
    scanf("%d",&find);

    pos=binary_search(numbers,0,n-1,find);

    if(pos==-1)
        printf("Element not found\n");

    else
        printf("The element %d is found at position %d\n",find,pos+1);

    return 0;
}