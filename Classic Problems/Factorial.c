// n! = n*(n-1)!

#include<stdio.h>
long long factorial(long long n){
    if(n == 1) return 1;
    else return n*factorial(n-1);
}
int main(){
    long long n;
    printf("Please enter a number: ");
    scanf("%lld",&n);
    printf("%lld! = %lld",n,factorial(n));
}