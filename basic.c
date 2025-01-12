#include<stdio.h>
int main()
{
    int row,col;
    printf("enter row and col value : ");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("enter elements of the 2d array : ");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the eleemmts of the 2d array :\n");
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
