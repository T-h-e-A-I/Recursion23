#include<stdio.h>
void incrementArray(int arr[],int sizeOfArr){
    int size = (sizeof(arr))/sizeof(int);
    printf("The size from incrementArray Function is: %d\n",size);
    for(int i = 0;i < sizeOfArr;i++){
        arr[i]++;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = (sizeof(arr)) / sizeof(int);
    printf("The size from main Function is: %d\n", size);
    incrementArray(arr,size);
    printf("After function:\n");
    for(int i = 0;i < size;i++){
        printf("The value of %dth element is %d\n",i+1,arr[i]);
    }
}