#include<stdio.h>

int main(){
    int arr[5];
    // printf("Enter element number 1: ");
    // scanf("%d",&arr[0]);
    // printf("Enter element number 2: ");
    // scanf("%d", &arr[1]);
    // printf("Enter element number 3: ");
    // scanf("%d", &arr[2]);
    // printf("Enter element number 4: ");
    // scanf("%d", &arr[3]);
    // printf("Enter element number 5: ");
    // scanf("%d", &arr[4]);
    for(int i= 0;i < 5;i++){
        printf("Enter the %dth element: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < 5;i++){
        printf("Th %dth element is %d\n",i+1,arr[i]);
    }
}