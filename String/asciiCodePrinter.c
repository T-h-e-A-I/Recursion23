#include<stdio.h>
int main(){
    for(char c='a';c <= 'z';c++){
        printf("The ascii code for %c is %d\n",c,c);
    }
    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("The ascii code for %c is %d\n", c, c);
    }
    for (char c = '0'; c <= '9'; c++)
    {
        printf("The ascii code for %c is %d\n", c, c);
    }
}