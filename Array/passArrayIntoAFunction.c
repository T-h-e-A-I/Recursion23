#include<stdio.h>
int sum(int hello[],int size){
    int total = 0;
    for(int i = 0;i < size;i++){
        total += hello[i];
    }
    return total;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int sumOfArray = sum(arr,5);
    printf("The sum of array is: %d\n",sumOfArray);

}