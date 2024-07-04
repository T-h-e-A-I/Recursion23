#include<stdio.h>
void increment(int x){
    x++;
    printf("The value of x is: %d\n",x);
}
void changeValue(int a){
    a = 10;
}
int main(){
    int b = 5;
    increment(b);
    printf("After increment function: \n");
    printf("The value of b is: %d\n",b);
    changeValue(b);
    printf("After change value function: \n");
    printf("The value of b is: %d\n", b);
    return 0;
}