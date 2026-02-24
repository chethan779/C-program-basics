#include<stdio.h>

int main(){
    
    printf("Multi Dimensional Arrays Example \n");
    int matrix[3][2]={
        {1,2},
        {6,7},
        {7,8}
    },transpose[2][3];

    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j< 2; j++)
        {
            transpose[i][j]=matrix[j][i];
        }
        
    }

    
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j< 2; j++)
        {
           printf("The values at [%d][%d] is : %d\n",i,j,transpose[i][j]);
        }
        
    }



    
    return 0;
}