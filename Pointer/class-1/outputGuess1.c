#include<stdio.h>

int main(){
    int x,y;
    int *p;
    x = 15;
    p = &x;
    y = *p;
    *p = 10;

    printf("The value of y is : %d\n",y);
    printf("The adress of y is: %p\n", &y);

    printf("The value of x is : %d\n", x);
    printf("The adress of x is: %p\n", &x);
    printf("The value of p is : %p\n", p);
    printf("The content of p is : %d\n",*p);

}
// x -> 10 , 0xd4
// y -> 15, 0xd8
// p->  0xd4  ,0xdc