#include<stdio.h>
#include "aweshmath.h"

int main(){
    int a = 5;
    int b = 11;
    int addition = add(a,b);
    printf("Addition is : %d\n",addition);
    double divison = div(a,b);
    printf("Division is %lf\n",divison);
    printf("Pi is : %lf\n",pi);
}