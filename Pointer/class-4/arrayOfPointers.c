#include<stdio.h>

int main(){
    char *message[] = {"Hello","World","How","Are","You","?"};
    for(int i = 0;i < 6;i++){
        printf("%s\n",message[i]);
    }
    return 0;
}