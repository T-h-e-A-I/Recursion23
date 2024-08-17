#include<stdio.h>
#include<time.h>

int main(){
    clock_t start,end;
    double time_taken;
    start = clock();
    for(int i = 0;i < 10000;i++)
    end = clock();
    time_taken = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken to run the program %f sec\n",time_taken);
}