#include<stdio.h>
#include<math.h>
int isPrime(int n){
    if(n <= 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3;i <= sqrt(n);i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        for(int i = a;i <= b;i++){
            if(isPrime(i)) printf("%d\n",i);
        }
    }
    printf("\n");
}