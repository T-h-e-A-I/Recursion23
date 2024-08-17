#include<stdio.h>

int main(){
    int a = 10;
    int c = 20;
    int max;
    if( a > c) max = a;
    else max = c;
    int max_tern = (a>c) ? a : c; 
    printf("The maximum is : %d\n",max_tern);
}