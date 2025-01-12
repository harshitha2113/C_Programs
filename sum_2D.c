#include<stdio.h>
void sum_array(int row1,int col1,int arr1[][col1],int row2,int col2,int arr2[][col2]);
int main()
{
    int row1,col1,row2,col2;
    printf("enter row1 and col1 values : ");
    scanf("%d %d",&row1,&col1);
    printf("enter row2 and col2 value : ");
    scanf("%d %d",&row2,&col2);
    if(row1 != row2 && col1 != col2)
    {
        printf("Error : sum should be for same dimension\n");
        return 0;
    }
    int arr1[row1][col1];
    printf("first array elements : \n");
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    int arr2[row2][col2];
    printf("second array elements : \n");
    for(int i = 0; i < row2; i++)
    {
        for(int j = 0; j < col2; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    sum_array(row1,col1,arr1,row2,col2,arr2);
}
void sum_array(int row1,int col1,int arr1[row1][col1],int row2,int col2,int arr2[row2][col2])
{
    int sum_arr[row1][col1];
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            sum_arr[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("after adding two matrices resultant is :\n");
    for(int i = 0; i < row1; i++)
    {
        for(int j = 0; j < col1; j++)
        {
            printf("%d ", sum_arr[i][j]);
        }
        printf("\n");
    }
}

