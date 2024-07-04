#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr = (int*)malloc(5*sizeof(int)); //int ptr[5];
    if(ptr == NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    for(int i = 0;i < 5;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i = 0;i < 5;i++){
        printf("The %dth number is %d\n",i+1,ptr[i]);
    }
    ptr = realloc(ptr,10*sizeof(int)); //int ptr[10]
    printf("\nAfter Allocation: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("The %dth number is %d\n", i + 1, ptr[i]);
    }
    free(ptr);
}