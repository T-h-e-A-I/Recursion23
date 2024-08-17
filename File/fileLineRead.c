#include<stdio.h>
#include<string.h>
int main(){
    FILE *fp;
    fp = fopen("inputLines.txt","r");
    if(fp == NULL){
        printf("File read failed.\n");
        return 1;
    }
    char line[500];
    int line_count = 0;
    int line_length;
    while (fgets(line,sizeof(line),fp) != NULL)
    {
        line_length = strlen(line);
        if(line_length > 0 && line[line_length-1] == '\n')
            line[line_length - 1] = '\0'; 
        printf("%s\n", line);
        line_count++;
    }
    printf("The number of lines in the file: %d\n",line_count);
    fclose(fp);
    return 0;
}