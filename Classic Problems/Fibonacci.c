#include<stdio.h>
int arr[1000];

long long fib(long long n){
    if(arr[n] != -1) return arr[n];
    else return arr[n] = (fib(n-1)+fib(n-2));
}
int main(){
    for(int i = 0;i < 1000;i++) arr[i] = -1;
    arr[0] = 0;
    arr[1] = 1;
    long long n;
    printf("Please enter a number: ");
    scanf("%lld",&n);
    printf("The %lldth fibonacci number is: %lld\n",n,fib(n));
}

// fib 0 = 0
// fib 1 = 1
// fib 2 = 1
// fib 3 = 2
// fib 4 = 3
// fib 5 = 5
// fib 6 = 8
// fib 7 = 13
// fib 8 = 21
// fib(n) = fib(n-1)+fib(n-2);