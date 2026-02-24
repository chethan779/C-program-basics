#include<stdio.h>

int main(){
    
    printf("Multi Dimensional Arrays Example \n");
    int r,c;
    scanf("%d\t%d", &r,&c);
    int matrix[r][c];

    for (int i = 0; i <r; i++)
    {
        for (int j = 0; j< c; j++)
        {
                scanf("%d", &matrix[i][j]);
        }
        
    }
    
    return 0;
}