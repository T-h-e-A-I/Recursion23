#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    printf("The value of pointer is: %p\n",ptr);
    int *qtr;
    printf("The value of pointer is: %p\n",qtr);
    free(ptr);
}