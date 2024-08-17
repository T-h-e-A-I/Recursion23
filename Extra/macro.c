#include<stdio.h>
#define Max(a,b) (a>b? a:b)

int main(){
    int a = 10;
    int b = 20;
    int max = Max(a,b);
    printf("The max value is : %d\n",max);
    printf("The max value is : %lf\n",Max(3.3,5.5));
    printf("The max value is : %c\n",Max('a','z'));
}