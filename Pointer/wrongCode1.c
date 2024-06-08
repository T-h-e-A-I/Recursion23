//Wrong Code

#include<stdio.h>

int main(){
    int a;
    double *p;
    p = &a;

    printf("The value of p is %p\n",p);
    printf("The content of p is %d\n",*p);
}