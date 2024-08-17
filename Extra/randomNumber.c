#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand((int)clock());
    for(int i = 0;i < 5;i++){
        int a = rand()%6+1;
        printf("%d\n",a);
    }
}