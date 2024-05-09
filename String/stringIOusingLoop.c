#include<stdio.h>
int main(){
    char input[100];
    printf("How many alphabets do you want to input: ");
    int n;
    scanf("%d\n",&n);
    for(int i = 0;i < n;i++){
        scanf("%c",&input[i]);
    }
    for(int i = 0; i < n;i++){
        printf("%c",input[i]);
    }
}

