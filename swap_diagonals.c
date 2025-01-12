#include<stdio.h>
void swap(int,int col,int arr[][col]);
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
    swap(row, col, arr);
}
void swap(int row, int col, int arr[row][col])
{
    for(int i = 0; i < col; i++)
    {
        int temp = arr[i][i];
        arr[i][i] = arr[i][col - 1 - i];
        arr[i][col - 1 - i] = temp;
        
    }
    printf("after swapping :\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }

}
