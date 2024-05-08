#include<stdio.h>
int main(){
    int arr[5] = {1,100,500,-100,20000};
    int max = arr[0];
    for(int i = 0; i < 5; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("The max element is %d\n",max);
}
//i = 0 max = 1 arr[i] = 1
//i = 1 max = 1 arr[i] = 100 max = 100
//i = 2 max = 100 arr[i] = 500 max = 500
//i = 3 max = 500 arr[i] = -100 max = 500
//i = 4 max = 500 arr[i] = 20000 max = 20000