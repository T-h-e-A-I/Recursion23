//24 = 1*24 = 2*12 = 3*8 = 4*6

//36 = 1*36 = 2*18 = 3*12 = 4*9 = 6*6

#include<stdio.h>
int gcd(int a,int b){
    int result,min;
    if(a > b) min = b;
    else min = a;
    for(int i = 1;i < min;i++){
        if(a % i == 0 && b % i == 0) result = i;
    }
    return result;
}
int main(){
    int a,b;
    printf("Please enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The gcd of %d and %d is %d\n",a,b,gcd(a,b));
}