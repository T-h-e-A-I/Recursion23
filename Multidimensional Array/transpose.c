#include <stdio.h>
#define row 4
#define col 3
void print_func(int matrix[][row], int row_count, int col_count)
{
    for (int i = 0; i < row_count; i++)
    {
        for (int j = 0; j < col_count; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void transpose_func(int matrix[][col], int transpose[][row])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}
int main()
{
    int matrix[row][col] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10,11,12},
    };
    int transpose[col][row];
    transpose_func(matrix, transpose);
    print_func(transpose,col,row);
}