#include<stdio.h>
int string_length(char str[]){
    int length = 0;
    for(int i = 0;str[i] != '\0';i++){
        length++;
    }
    return length;
}
int main(){
    char word[100];
    printf("Please enter a word: ");
    scanf("%s",word);
    int length = string_length(word);
    printf("The number of alphabets in your word is: %d\n",length);
}