#include <stdio.h>
#include <stdlib.h>
void magic_square(int **, int);

int main()
{
   int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   if(!(n & 1))
        printf("Error : Please enter only odd values");
   int *arr[n]; //array of pointers.
   for(int i = 0; i < n; i++)
        arr[i] = calloc(n,sizeof(int));
   magic_square(arr,n);
   for(int i = 0; i < n; i++)
   {
       for(int j = 0; j < n; j++)
       {
            printf("%2d ", arr[i][j]);
       }
       printf("\n");
   }
   
  
}
void magic_square(int ** arr, int n)
{
    int row,col;
    row = 0, col = n/2;
    int r = row, c = col;
    arr[row][col] = 1;
    for(int i = 2; i <= n * n; i++)
    {
        row--;
        col++;
        if(row < 0)
            row = n - 1;
        if(col == n)
            col = 0;
        if((arr[row][col]) != 0)
        {
            row = ++r, col = c;
        }
        arr[row][col] = i;
        r = row, c = col;
    }
}
