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