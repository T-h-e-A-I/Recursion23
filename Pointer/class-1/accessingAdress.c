#include<stdio.h>

int main(){
    int a = 5;
    int b = 10;
    char c = 'a';
    char d = 'b';

    printf("The value of a is : %d\n",a);
    printf("The address of a is %p\n",&a);

    printf("The value of b is : %d\n", b);
    printf("The address of b is %p\n", &b);

    printf("The value of c is %c\n",c);
    printf("The address of c is %p\n",&c);

    printf("The value of d is %c\n", d);
    printf("The address of d is %p\n", &d);
}

//&a = adress of a

//0x16d4f31e8 0x16d4f31ec