#include<stdio.h>

int main(){
    char countries[8][100] ={
        {'B','a','n','g','l','a','d','e','s','h'},
        "India",
        "Pakistan",
        "Afganistan",
        "Nepal",
        "Bhutan",
        "Sri Lanka",
        "Maldives"
    };
    for(int i = 0 ; i < 8;i++){
        printf("%s\n",countries[i]);
    }
    for(int i = 0;i < 8;i++){
        for(int j = 0;countries[i][j] != '\0';j++){
            printf("%c",countries[i][j]);
        }
        printf("\n");
    }
}