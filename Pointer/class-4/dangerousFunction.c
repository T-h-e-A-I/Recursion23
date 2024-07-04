//Wrong code
#include<stdio.h>
int* dangerousNoAllocation(){
    int x = 100;
    return &x;
}
int main(){
    int *p = dangerousNoAllocation();
    printf("The value of *p is : %d\n",*p);
}