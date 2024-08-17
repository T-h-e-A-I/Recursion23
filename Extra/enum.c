#include<stdio.h>

enum {RED,BLUE = 40,GREEN};

int main(){
    printf("The value of red is %d\n",RED);
    printf("The value of blue is %d\n", BLUE);
    printf("The value of red is %d\n", GREEN);
}

