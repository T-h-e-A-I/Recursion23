#include<stdio.h>
#include<math.h>
int isPrime[10000];
void sieveOfEratosthenes(int range){
    for(int i = 0;i <= range;i++) isPrime[i] = 1;
    isPrime[0] = 0;
    isPrime[1] = 0;
    for(int i = 2;i <= sqrt(range);i++){
        if(isPrime[i]){
            for(int j = i*i;j <= range;j=j+i){
                isPrime[j] = 0;
            }
        }
    }
}
int main(){
    sieveOfEratosthenes(1000);
    for(int i = 0;i <= 1000;i++){
        if(isPrime[i]) printf("%d ",i);
    }
    printf("\n");
}

// 2->4,6,8,10,12,14 ... ...
// 3->9,10,15,20 ... ...
// 5->25,30 ... ... 
// 7->49,56 ... ... 