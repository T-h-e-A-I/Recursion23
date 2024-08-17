#include<stdio.h>
#include<string.h>
int main(){
    char fullname[50]; 
    fgets(fullname,sizeof(fullname),stdin);
    int len = strlen(fullname);
    if(len > 0 && fullname[len-1] == '\n') fullname[len-1] = '\0';
    printf("The fullname is : %s\n",fullname);
}