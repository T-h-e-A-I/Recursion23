#include<stdio.h>
void increment(int b){
    b++;
    printf("The value of b is: %d\n",b);
}
void arrayIncrement(int brr[],int size){
    for(int i = 0;i < size;i++){
        brr[i]++;
    }
}
int main(){
    int i = 5;
    increment(i);
    printf("The value of i is: %d\n",i);
    int arr[5] = {1,2,3,4,5};
    printf("Elements of array: \n");
    for(int i = 0;i < 5;i++){
        printf("%d\n",arr[i]);
    }
    arrayIncrement(arr,5);
    printf("Elements of array after increment: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}