#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p,*q;
    p = (int*)malloc(5*sizeof(int));
    q = (int*)calloc(5,sizeof(int));
    for(int i = 0;i < 5;i++){
        printf("The one initialised with malloc : %d\n",p[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The one initialised with calloc : %d\n", q[i]);
    }
    free(p);
    free(q);
}