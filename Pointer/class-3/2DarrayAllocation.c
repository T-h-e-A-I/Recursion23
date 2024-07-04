#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr;
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);
    arr = (int **)malloc(row * sizeof(int *));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }
    for (int i = 0; i < row; i++)
    {
        arr[i] = (int *)malloc(col * sizeof(int));
        if (arr[i] == NULL)
        {
            printf("Memory allocation failed\n");
            exit(0);
        }
    }
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            printf("Enter element of row %d and col %d: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Element of row %d and col %d: %d", i, j,arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);
}