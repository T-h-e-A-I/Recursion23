//Wrong Code
#include<stdio.h>

int main(){
    int c = 10;
    int *p;
  //p = &c will solve the problem
    *p = 15;

    printf("The value of p is: %p\n",p);
    printf("Content of p is: %d\n",*p);
}