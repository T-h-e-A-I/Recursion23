#include<stdio.h>
void increment(int *x){
    (*x)++;
}
void changeValue (int *a){
    (*a) = 10;
}
int main(){
    int b = 5;
    increment(&b);
    printf("The value of b is: %d\n",b);
    changeValue(&b);
    printf("The value of b is: %d\n",b);
}