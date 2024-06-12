#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    for(int i = 0;i < 5;i++){
        printf("The value of arr[%d] is %d\n",i,arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of p[%d] is %d\n", i, p[i]);
    }
}