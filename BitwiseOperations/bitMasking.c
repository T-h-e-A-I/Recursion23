#include<stdio.h>

int main(){
    int number = 16; //0001 0000
    int mask = 0xF0;  //1111 0000

    int masking = number & mask; // 0001 0000
    printf("The number after masking is %d\n",masking);
}