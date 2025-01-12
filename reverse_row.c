#include<stdio.h>
void reverse_row(int ,int col, int arr[][col]);
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
    reverse_row(row,col,arr);
}
void reverse_row(int row,int col,int arr[row][col])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < (col/2); j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][col - j - 1];
            arr[i][col - j - 1] = temp;

        }
    }
    for(int i = 0; i < row; i++)
    {
        printf("after reversing %d row array elements are : ", i + 1);
        for(int j = 0; j < col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
