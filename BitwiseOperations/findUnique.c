#include<stdio.h>
int main(){
    int arr[11] = {1,2,3,4,1,2,3,4,5,5,6};
    int unique = 0;
    for(int i = 0;i < sizeof(arr)/sizeof(int);i++){
        unique ^= arr[i];
    }
    printf("The unique number is: %d\n",unique);
}