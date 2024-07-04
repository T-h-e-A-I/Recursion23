#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int increment(int x){
    return ++x;
}
int main(){
    int (*operation)(int,int);
    operation = &add;
    int result = operation(6,5);
    printf("The value of result is %d\n",result);
    operation = &sub;
    int result2 = operation(6,5);
    printf("The value of result2 is %d\n",result2);
    return 0;
}