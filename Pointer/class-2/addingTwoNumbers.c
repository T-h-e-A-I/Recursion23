#include<stdio.h>

int main(){
    int a;
    int b;
    int *p,*q;
    p = &a;
    q = &b;
    printf("Enter two numbers: ");
    scanf("%d",p);
    scanf("%d",q);
    int result = *p + *q;
    printf("The sum is: %d\n",result);
}