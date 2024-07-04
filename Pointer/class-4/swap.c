#include<stdio.h>
void swap(int *a,int *b){ //Pass by reference modifies main
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swap2(int a,int b){ //Pass by value doesn't modify main
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10,b = 20;
    swap(&a,&b);
    //swap2(a,b);
    printf("The value of a is : %d\nThe value of b is: %d\n",a,b);
}