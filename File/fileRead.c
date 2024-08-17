#include<stdio.h>
int main(){
    FILE *fp;
    char filename[50] = "input.txt";
    fp = fopen(filename,"r");
    if(fp == NULL){
        printf("File open failed.\n");
        return 1;
    }
    char input_txt[50];
    fscanf(fp,"%s",input_txt);
    printf("%s\n",input_txt);
    return 0;
}