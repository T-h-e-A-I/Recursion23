#include <stdio.h>

int main(){
     char line[1000];
     printf("Please enter a line: ");
     //gets(line);
     fgets(line,sizeof(line),stdin);
     puts(line);
}