#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    printf("The value of arr[0] is %d\n",*arr);
    printf("The value of arr[1] is %d\n",*(arr+1));
    printf("The value of arr[2] is %d\n", *(arr + 2));
    printf("The value of arr[3] is %d\n", *(arr + 3));
    printf("The value of arr[4] is %d\n", *(arr + 4));
    for(int i = 0;i < 5;i++){
        printf("The value of arr[%d] is %d\n",i,*(arr+i));
    }
}