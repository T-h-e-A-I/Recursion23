#include<stdio.h>

void prime(int n,int *isPrime,int *primePosition){
    int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    for(int i = 0;i < 25;i++){
        if(primes[i] == n){
            *isPrime = 1;
            *primePosition = i+1;
        }
    }
}
int main(){
    printf("Enter a number: ");
    int n;
    scanf("%d",&n);
    int isPrime = 0,primePosition = -1;
    prime(n,&isPrime,&primePosition);
    if(isPrime) printf("The number is a prime.\nPrime poisiton %d\n",primePosition);
    else printf("The number is not a prime.\n");
}