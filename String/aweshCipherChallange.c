#include<stdio.h>
#include<string.h>
int main(){
    printf("message: ");
    char str[1000];
    fgets(str,sizeof(str),stdin);
    char target;
    printf("target: ");
    scanf("%c",&target);
    int count = 0;
    for(int i = 0; i < strlen(str);i++){
        if(str[i] == target) count++;
    }
    printf("There are %d occurences of %c\n",count,target);
}