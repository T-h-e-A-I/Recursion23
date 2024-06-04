#include<stdio.h>
#include<math.h>
int isPrime(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3;i <= sqrt(n);i=i+2){
        if(n % i == 0) return 0;
    }
    return 1;
}
int main(){
    for(int i = 1;i < 1000;i++){
        if(isPrime(i)) printf("%d ",i);
    }
    printf("\n");
}
