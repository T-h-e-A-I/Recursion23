#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("inputNumbers.txt","r");
    if(fp == NULL){
        printf("file open failed.\n");
        return 1;
    }
    FILE *fp1;
    fp1 = fopen("outputNumbers.txt", "w");
    if (fp1 == NULL)
    {
        printf("file open failed.\n");
        return 1;
    }
    int a,b;
    while (fscanf(fp,"%d %d",&a,&b) != EOF)
    {
        fprintf(fp1,"%d + %d = %d\n",a,b,a+b);
    }
    fclose(fp);fclose(fp1);
    return 0;
}