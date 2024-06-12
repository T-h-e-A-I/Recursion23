#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int brr[5];

    //brr = arr; 
    //Copying array by assigning is not possible

    for(int i = 0;i < 5;i++){
        brr[i] = arr[i];
    }
    for(int i = 0;i < 5;i++){
        printf("The value of arr[%d] is %d\n",i,arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of brr[%d] is %d\n", i, brr[i]);
    }
}