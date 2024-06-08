#include<stdio.h>

int main(){
    int *pc;
    int c = 11;

    printf("The value of c is %d\n",c);
    printf("The adress of c is %p\n",&c);

    pc = &c;
    printf("The value of pc is %p\n",pc);
    printf("Content of pc is %d\n",*pc);
    
    c = 22;
    printf("The value of c is %d\n", c);
    printf("The adress of c is %p\n", &c);

    *pc = 45;
    printf("The value of c is %d\n", c);
    printf("The adress of c is %p\n", &c);
}

// *pc c er onno nam