#include<stdio.h>
void nth_row(int n,int row, int col, int arr[row][col]);
int main()
{
    int row,col,n;
    printf("enter row and col value : ");
    scanf("%d %d",&row,&col);
    printf("enter row number : ");
    scanf("%d",&n);
    if(n > row || n < 0)
    {
        printf("n value must be in the range of row\n");
        return 0;
    }
    int arr[row][col];
    printf("enter 2D array elements :\n");
    for(int  i = 0; i < row; i++)
    {
        for(int j = 0; j < col ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    nth_row(n,row,col,arr);
}
void nth_row(int n, int row, int col, int arr[row][col])
{
    printf("%d row array elements are : ",n);
    for(int j = 0; j < col; j++)
    {
        printf("%d ",arr[n][j]);
    }
    printf("\n");
    
}

