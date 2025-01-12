#include<stdio.h>
void multiply(int row,int col,int arr1[row][col],int row1,int col1,int arr2[row1][col1])
{
    int final[row][col1];
    for(int i =0; i < row; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            int sum = 0;
            for(int k = 0; k < col; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            final[i][j] = sum;
        }
    
    }
    printf("after mulyiplication : \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            printf("%d ",final[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int row,col,row1,col1;
    printf("enter row and col value : ");
    scanf("%d %d",&row,&col);
    printf("enter row1 and col1 value : ");
    scanf("%d %d",&row1,&col1);
    if(col != row1)
    {
        printf("multiplication not possible\n");
    }
    int arr1[row][col];
    printf("enter array1 elements : ");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[row1][col1];
    printf("enter array2 elememts : ");
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    multiply(row,col,arr1,row1,col1,arr2);
    
    
    
}
