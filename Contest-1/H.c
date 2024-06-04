#include<stdio.h>

int main(){
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for(long long i = 0;i < n;i++){
        scanf("%lld",&arr[i]);
    }
    long long result = 0;
    for(long long i = 1;i < n;i++){
        if(arr[i-1] > arr[i]){
            result += arr[i - 1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    printf("%lld\n",result);
}