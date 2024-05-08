#include <stdio.h>

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 9, j = 0; j <= 4; i--, j++)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The %dth element is %d\n", i + 1, arr[i]);
    }
}