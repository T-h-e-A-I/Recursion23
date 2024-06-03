#include<stdio.h>
void array_print(int arr[],int size){
    for(int i = 0;i < size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int linear_search(int arr[],int size,int target){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target) return i;
    }
    return -1;
}
int main(){
    int arr[10] = {10,14,19,26,27,31,33,35,42,44};
    int target = 50;
    array_print(arr,10);
    int result  = linear_search(arr,10,target);
    if(result == -1) printf("The number was not found in the array.");
    else printf("The number was found on position %d\n",result);
}