#include<stdio.h>

int main(){
    int a; //4 BYTE
    char b; //1 BYTE
    float c; //4 BYE
    long d; //8 BYTE
    long long e; //8 BYTE
    double f; //8 BYTE
    size_t g; //8 BYTE
    
    printf("The size of int is: %zu byte\n",sizeof(a));
    printf("The size of long is: %zu byte\n", sizeof(d));
    printf("The size of long long is: %zu byte\n", sizeof(e));

    printf("The size of charachter is %zu byte\n",sizeof(b));
    printf("The size of float is %zu byte\n", sizeof(c));
    printf("The size of double is %zu byte\n", sizeof(f));

    printf("The size of size_t is %zu byte\n", sizeof(g));
}