#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // printf("The first element of array is: %d\n", arr[0]);  // 1
    // printf("The second element of array is: %d\n", arr[1]); // 2
    // printf("The third element of array is: %d\n", arr[2]);  // 3
    // printf("The fourth element of array is: %d\n", arr[3]); // 4
    // printf("The fifth element of array is: %d\n", arr[4]);  // 5
    for(int i = 0;i < 5;i++){
        printf("The element in index number %d is %d\n",i,arr[i]);
    }
}