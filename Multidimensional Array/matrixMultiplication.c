#include<stdio.h>

#define row1 3
#define col1 3

#define row2 3
#define col2 3

void multiply(int mat1[row1][col1], int mat2[row2][col2], int result[row1][col2])
{
    if(col1 != row2){
        printf("Dimension Error!");
        return;
    }
    for(int i = 0;i < row1;i++){
        for(int j = 0; j < col2;j++){
            result[i][j] = 0;
            for(int k = 0;k < col1;k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
 int main()
{
    int mat1[row1][col1] = {
        {1,2,10},
        {2,3,11},
        {12,13,14}
    };
    int mat2[row2][col2] = {
        {4,5,10},
        {6,7,11},
        {12,13,14},
    };
    int result[row1][col2];
    multiply(mat1,mat2,result);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}

// {
//     {16 ,19},
//     {26, 31},
// }