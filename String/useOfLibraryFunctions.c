#include<stdio.h>
#include<string.h>

int main(){
    char str[100] = "Hello";
    char length = strlen(str);
    printf("The length of your string is: %d\n",length);
    char str_new[100];
    strcpy(str_new,str);
    printf("the new string after copy is: %s\n",str_new);
    char str2[100] = "world";
    strcat(str,str2);
    printf("The str after cat is: %s\n",str);
    printf("The value of comp is %d\n",strcmp(str_new,str));
}