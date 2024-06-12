#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    printf("The value stored in arr is %p\n",arr);
    printf("The adress of arr[0] is %p\n",&arr[0]);
}

// arr = &arr[0]