#include<stdio.h>

int main(){
    char c;
    printf("Plese enter a character: ");
    scanf("%c",&c);
    if(c >= 'A' && c <= 'Z'){
        c = c | 32;
        printf("After converting to lower case : %c\n", c);
    }else if(c >= 'a' && c <= 'z'){
        c = c & 95;
        printf("After converting to upper case : %c\n",c);
    }else{
        printf("Invalid Input.\n");
    }
}