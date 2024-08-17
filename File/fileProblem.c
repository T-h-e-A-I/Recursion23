#include<stdio.h>

int main(){
    FILE *fp,*fp1;
    fp = fopen("in.txt","r");
    if(fp == NULL){
        printf("input file not opened.\n");
        return 1;
    }
    fp1 = fopen("out.txt","w");
    if (fp1 == NULL)
    {
        printf("output file not opened.\n");
        return 1;
    }
    int a,b;
    fscanf(fp,"%d %d",&a,&b);
    fprintf(fp1,"%d",a+b);
    fclose(fp);
    fclose(fp1);
}