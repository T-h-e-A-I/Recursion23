#include<stdio.h>
int gcd(int  a,int b){
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    if(b % a == 0) return a;
    else return gcd(b%a,a);
}
int main(){
    int a,b;
    printf("Please Enter Two Numbers: ");
    scanf("%d %d",&a,&b);
    printf("There gcd is: %d\n", gcd(a,b));
}