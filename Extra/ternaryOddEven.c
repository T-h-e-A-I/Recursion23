#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    char answer[50];
    strcpy(answer,((n%2) == 0) ? "EVEN" : "ODD");
    printf("The number is %s\n",answer);
}