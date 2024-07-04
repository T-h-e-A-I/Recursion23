#include<stdio.h>
void incrementByValue(int x){
    x++;
}
void incrementByReference(int *x){
    (*x)++;
}
int postIncrementByReturning(int x){
    return x++;
}
int preIncrementByReturning(int x){
    return ++x;
}
int main(){
    int a = 5;
    int b = 5;
    int c = 5;
    int d = 5;
    incrementByValue(a);
    incrementByReference(&b);
    c = postIncrementByReturning(c);
    d = preIncrementByReturning(d);
    printf("The vlaue of a is: %d\nThe vlaue of b is: %d\nThe vlaue of c is: %d\nThe vlaue of d is: %d\n",a,b,c,d);
}