// #include<stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int sum = a+b;
//     printf("%d\n",sum);
// }
#include <stdio.h>

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%0.0lf", a + b);

    return 0;
}