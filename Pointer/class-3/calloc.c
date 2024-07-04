#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    if(ptr == NULL){
        printf("Memory not allocated\n");
        exit(0);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d th number :", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The %d th number is %d\n", i + 1, ptr[i]);
    }
    free(ptr);
}