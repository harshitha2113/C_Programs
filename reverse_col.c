#include<stdio.h>
void reverse_col(int ,int col, int arr[][col]);
int main()
{
    int row,col;
    printf("enter row and col values : ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("enter array elements : ");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    reverse_col(row,col,arr);
}
void reverse_col(int row,int col,int arr[row][col])
{
    for(int i = 0; i < col; i++)
    {
        for(int j = 0; j < (row/2); j++)
        {
            int temp = arr[j][i];
            arr[j][i] =arr[row - j - 1][i];
            arr[row - j - 1][i] = temp;

        }
    }
    printf("after reversing each column \n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
}
