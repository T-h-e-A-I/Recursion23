#include<stdio.h>
void string_reverse(char str[]){
    int i = 0;
    for(i = 0; str[i] != '\0';i++);
    for(int j = 0,k = i-1;j < i/2;j++,k--){
        int temp = str[k];
        str[k] = str[j];
        str[j] = temp;
    }
}
int main(){
    char str[100] = "Hello world";
    string_reverse(str);
    printf("String after reversal: %s\n",str);
}