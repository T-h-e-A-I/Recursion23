#include<stdio.h>

int main(){
    int a = 5;
    int result = ~a;
    printf("The original number is %d\n",a);
    printf("The result after applying not operator is : %d\n",result);
    unsigned int b = 5;
    unsigned int result_unsigned = ~b;
    printf("The original number is %u\n",b);
    printf("The result after applying not operator is: %u\n",result_unsigned);
    return 0;
}