#include<stdio.h>

int main(){
    char str[100];
    printf("Please enter a string to capitalise: ");
    scanf("%s",str);
    int length = 0;
    for(;str[length] != '\0';length++);
    for(int i = 0; i < length;i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i]-'a'+'A';
        }
    }
    printf("The string after capitalisation is: %s\n",str);
}