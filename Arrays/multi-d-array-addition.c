#include<stdio.h>

int main(){
    printf("Addition of multi-dimensional array\n");
    int matrix1[3][2];
    int matrix2[3][2];
    int addmatrix[3][2];

    printf("******************************************************************************************************************\n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j< 2; j++)
        {
           printf("Enter the matrix1 value at %d %d: ",i,j);
           scanf("%d",&matrix1[i][j]);
        }
        
    }

    printf("******************************************************************************************************************\n");

    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j< 2; j++)
        {
           printf("Enter the matrix2 value at %d %d: ",i,j);
           scanf("%d",&matrix2[i][j]);
        }
        
    }
    printf("******************************************************************************************************************\n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j< 2; j++)
        {
          printf("The added element at position %d %d is: %d\n",i,j,matrix1[i][j]+matrix2[i][j]);
          addmatrix[i][j]=matrix1[i][j]+matrix2[i][j];
        }
        
    }
    printf("******************************************************************************************************************\n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j< 2; j++)
        {
           printf("The addMatrix value at %d %d is: %d \n",i,j,addmatrix[i][j]);
        }
        
    }
    printf("******************************************************************************************************************\n");
    return 0;
}