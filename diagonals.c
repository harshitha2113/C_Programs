#include<stdio.h>
int main()
{
    int row,col;
    printf("enter row and col values : ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    if(row != col)
    {
        printf("diagonals not exist\n");
        return 0;
    }
    printf("enter array elements : ");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("diagonals of the array on left side : ");
    for(int i = 0; i < col; i++)
    {
        printf("%d ",arr[i][i]);
    }
    printf("\n");
    printf("diagonals of the array on right side : ");
    for(int i = 0; i < col; i++)
    {
  
        printf("%d ",arr[i][col - i - 1]);
    }
    printf("\n");
}
