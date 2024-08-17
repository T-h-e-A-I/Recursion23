#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    char cap = (c >= 'a' && c <= 'z') ? (c -'a' + 'A') : c;
    
    // if(c >= 'a' && c <= 'z') cap = c - 'a' + 'A';
    // else cap = c;

    printf("After capitalisation %c\n",cap);
    
}