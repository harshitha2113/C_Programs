#include<stdio.h>
void reverse_row(int row,int col, int arr[row][col]);
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
void reverse_row(int row, int col, int arr[row][col])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            for(int k = 0; k < col - j - 1; k++)
            {
                if(arr[i][k] > arr[i][k + 1])
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
    printf("after sorting row array elements are :\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
}
