#include<stdio.h>
#include<math.h>
int main(){
    FILE *fp;
    char filename[50] = "output1.txt";
    fp = fopen(filename,"a"); 
    if(fp == NULL){
        printf("Failed to open the fail.\n");
        return 1;
    }
    fprintf(fp,"Hello World\n");
    const float pi = 2*acos(0);
    fprintf(fp,"The value of pi is %f\n",pi);
    fclose(fp);
    return 0;
}