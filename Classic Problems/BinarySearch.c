#include<stdio.h>

int binary_search(int arr[],int size,int target){
    int left = 0;
    int right = size-1;
    int mid;
    while (left <= right)
    {
        mid = (left+right)/2;
        if(arr[mid] == target) return mid;
        if(arr[mid] > target) right = mid-1;
        if(arr[mid] < target) left = mid+1; 
    }
    return -1;
    
}

int main(){
    int arr[10] = {10,15,16,17,18,24,25,30,35,50};
    int target = 50;
    int result = binary_search(arr,10,target);
    if(result == -1) printf("The number was not found anywhere in the array.\n");
    else printf("The number was found at postion %d in the array.\n ",result);
}
