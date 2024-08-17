#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("input1.txt","r");
    if(fp == NULL){
        printf("File not opened.\n");
        return 1;
    }
    int num;
    int count = 0;
    while (fscanf(fp,"%d",&num) != EOF)
    {
        printf("%d\n",num);
        count++;
    }
    printf("The number of numbers in the file was %d\n",count);
    return 0;
}