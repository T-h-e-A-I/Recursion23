#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr,n;
    printf("Enter the number of elements in your array: ");
    scanf("%d",&n);
    //int arr[n];
    ptr = (int*)malloc(n*sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    for(int i = 0;i < n;i++){
        printf("Enter the %d th element : ",i+1);
        scanf("%d",(ptr+i));
    }
    for(int i = 0;i < n;i++){
        printf("The %d th element is %d\n",i+1,*(ptr+i));
    }
    free(ptr);
}