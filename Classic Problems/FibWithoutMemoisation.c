#include <stdio.h>


long long fib(long long n)
{
    if(n == 0) return 0;
    else if(n == 1) return 1;
    else
        return (fib(n - 1) + fib(n - 2));
}
int main()
{
    long long n;
    printf("Please enter a number: ");
    scanf("%lld", &n);
    printf("The %lldth fibonacci number is: %lld\n", n, fib(n));
}
