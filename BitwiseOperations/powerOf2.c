#include<stdio.h>

int  main(){
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    if(n  & n-1) printf("The number is not a power of 2.\n");
    else printf("The number is power of 2.\n");
}

