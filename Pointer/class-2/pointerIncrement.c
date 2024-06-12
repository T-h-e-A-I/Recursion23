#include<stdio.h>
int main(){
    char str[5] = {'a','b','c','d','e'};
    char *p;
    p = &str[0];
    printf("The value of p is %p\n",p);
    printf("The value of p+1 is %p\n",p+1);

    long arr[5] = {1,2,3,4,5};
    long *q;
    q = &arr[0];
    printf("The value of q is: %p\n",q);
    printf("The value of q+1 is : %p\n",q+1);
}