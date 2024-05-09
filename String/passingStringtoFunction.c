#include<stdio.h>
void displayString(char str[]);
int main(){
    char line[100] = "Hello World";
    displayString(line);
    return 0;
}
void displayString(char str[]){
    printf("Your input was: %s\n",str);
}