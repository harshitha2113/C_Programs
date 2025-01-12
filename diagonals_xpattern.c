#include<stdio.h>
int main()
{
    int row,col;
    printf("enter row and col values : ");
    scanf("%d %d",&row,&col);
    if(row != col)
    {
        printf("Error : diagonal are present for square matrix only\n");
        return 0;
    }
    int arr[row][col];
    printf("enter array elements : ");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if((i == j) || (i + j) == (row - 1))
            {
                printf("%2d ", arr[i][j]);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}
