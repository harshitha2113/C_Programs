#include<stdio.h>
void transpose(int row,int col,int arr[row][col])
{
    printf("after transpose matrix is :\n");
    for(int i =0; i < col; i++)
    {
        for(int j = 0; j < row; j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int row,col;
    printf("enter row and col value : ");
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
    transpose(row,col,arr);
}
