#include<stdio.h>
int main(){
    int a, *p;
    p = &a;
    char b, *q;
    q = &b;
    double c, *r;
    r = &c;
    float d, *s;
    s = &d;
    long e, *t;
    t = &e;

    //Print Sizes
    printf("The size of int is: %zu bytes\n", sizeof(a));
    printf("The size of char is: %zu bytes\n", sizeof(b));
    printf("The size of double is: %zu bytes\n", sizeof(c));
    printf("The size of float is: %zu bytes\n", sizeof(d));
    printf("The size of long is: %zu bytes\n", sizeof(e));
    printf("\n");
    printf("The size of int pointer is: %zu bytes\n",sizeof(p));
    printf("The size of char pointer is: %zu bytes\n", sizeof(q));
    printf("The size of double pointer is: %zu bytes\n", sizeof(r));
    printf("The size of float pointer is: %zu bytes\n", sizeof(s));
    printf("The size of long pointer is: %zu bytes\n", sizeof(t));
}