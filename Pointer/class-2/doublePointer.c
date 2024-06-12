#include<stdio.h>

int main(){
    int a = 5;
    int *p;
    p = &a;
    printf("The value of a is: %d\n",a);
    printf("The adress of a is %p\n",&a);
    printf("\n");
    printf("The value of *p is %d\n",*p);
    printf("The value of p is: %p\n", p);
    printf("The adress of  p is: %p\n",&p);
    printf("\n");
    int **q;
    q = &p;
    printf("The value of **q is : %d\n",**q);
    printf("The value of *q is : %p\n",*q);
    printf("The value of q is : %p\n",q);
    printf("The adress of q is : %p\n",&q);
    printf("\n");
    int ***r;
    r = &q;
    printf("The value of ***r is : %d\n", ***r); 
    //***r = **(*r) = **q = *(*q) = *p = a
    //a
    printf("The value of **r is : %p\n", **r);
    //**r = *(*r) = *q = p = &a
    //a er adress
    printf("The value of *r is : %p\n", *r); //p er adress
    printf("The value of r is : %p\n", r); //q er adress
    printf("The adress of r is : %p\n", &r); // r er adress
}
