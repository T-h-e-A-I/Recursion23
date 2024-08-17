#include<stdio.h>
struct complex
{
    float a;
    float b;
};

int main(){
    int a = 10;
    int *ip;
    ip = &a;
    printf("The value of a is : %d\n",*ip);
    struct complex b = {2.1,3.4};
    struct complex *cp;
    cp = &b;
    printf("The complex number is %0.2f+%0.2fi\n",cp->a,cp->b);
    cp->a = 10;
    printf("After change: \n");
    printf("The complex number is %0.2f+%0.2fi\n", cp->a, cp->b);
}