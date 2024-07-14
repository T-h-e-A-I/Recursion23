#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("Enter another number: ");
    scanf("%d", &num2);
    if((num1 ^ num2) == 0) printf("The numbers are equal.\n");
    else printf("The numbers are not equal.\n");
}