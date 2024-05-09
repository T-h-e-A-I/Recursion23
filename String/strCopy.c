#include<stdio.h>
void my_str_cpy(char dest[],const char src[]){
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
}
int main(){
    char word[100] = "helloworld";
    printf("Your word is: %s\n",word);
    my_str_cpy(word,"awesh");
    printf("Your word after copy is: %s\n",word);
    return 0;
}