//PES1UG25AM095

#include<stdio.h>
#include<stdlib.h>

int main()
{
int old_n;
int* x;
printf("Enter number of elements: ");
scanf("%d",&old_n);

x=(int *)malloc(old_n*sizeof(int));
if(x==NULL)
{
printf("Memory allocation failed!!!!\n");
free(x);
}

printf("Enter %d elements for malloc:\n",old_n);
for(int i=0;i<old_n;i++)
{
scanf("%d",(x+i));
}
printf("Elements  stored using malloc:\n");
for(int i=0;i<old_n;i++)
{
printf("%d ",*(x+i));
}

int *y;
y=(int *)calloc(old_n,sizeof(int));
printf("\nEnter elements in calloc:\n");
for(int i=0;i<old_n;i++)
{
scanf("%d",(y+i));
}
printf("\nElements stored using calloc:\n");
for(int i=0;i<old_n;i++)
{
printf("%d ",*(y+i));
}

int new_n;
printf("\nEnter new size for realloc: ");
scanf("%d",&new_n);
int *z;

z=(int *)realloc(y,new_n*sizeof(int));
if(z==NULL)
{
printf("Memory allocation failed!!!!\n");
free(z);
}
free(x);
free(y);
y=NULL;
printf("Enter %d elements after realloc:\n",new_n-old_n);
for(int i=old_n;i<new_n;i++)
{
scanf("%d",(z+i));
}
printf("Elements  stored using realloc:\n");
for(int i=0;i<new_n;i++)
{
printf("%d ",*(z+i));
}

free(z);
printf("\nMemory deallocated successfully using free()");
z=NULL;
x=NULL;
}