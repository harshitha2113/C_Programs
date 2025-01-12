#include<stdio.h>
void nth_column(int n,int row, int col, int arr[row][col]);
int main()
{
    int row,col,n;
    printf("enter row and col value : ");
    scanf("%d %d",&row,&col);
    printf("enter column number : ");
    scanf("%d",&n);
    if(n > col || n < 0)
    {
        printf("n value must be in the range of column\n");
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
    nth_column(n,row,col,arr);
}
void nth_column(int n, int row, int col, int arr[row][col])
{
    printf("%d column array elements are : ",n);
    for(int i = 0; i < row; i++)
    {
        printf("%d ",arr[i][n]);
    }
    printf("\n");
    
}

