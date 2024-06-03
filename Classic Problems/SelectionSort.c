#include<stdio.h>
void selection_sort(int arr[],int size){
    for(int i = 0;i < size;i++){
        int min = arr[i];
        int minIndex = i;
        for(int j = i;j < size;j++){
            if(arr[j] < min){
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
int main(){
    int arr[10] = {99,88,10,1000,100,2,3,80,44,33};
    selection_sort(arr,10);
    for(int i = 0;i < 10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}