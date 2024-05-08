#include<stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int brr[10];
    for(int i = 9,j = 0; i >= 0,j <= 9;i--,j++){
        brr[j] = arr[i];
    }
    for(int i = 0; i < 10;i++){
        printf("The %dth element is %d\n",i+1,brr[i]);
    }
}