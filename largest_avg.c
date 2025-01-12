#include<stdio.h>
int main()
{
    int row,col;
    printf("enter row and column values : ");
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
    //finding largest element
    int max = arr[0][0];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }
    printf("largest element od 2-D array is %d\n", max);
    //finding largest element of 1-D array
    int large = arr[0][0];
    for(int i = 0; i < row; i++)
    {
         int large = arr[i][0];
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] > large)
            {
                large = arr[i][j];
            }
        }
        printf("largest element of each 1-D array is %d\n", large);
    }
    //average of ech column of 2-D array
    for(int i = 0; i < col; i++)
    {
        int sum = 0;
        float avg;
        for(int j = 0; j < row; j++)
        {
            sum = sum + arr[j][i];

        }
        avg = sum /(float) row;
        printf("average of column is  = %g\n",avg);
    }
}
