#include<stdio.h>
#include<math.h>

int main(){
    double n,m,a;
    scanf("%lf %lf %lf",&n,&m,&a);

    double flagstone = ceil(m/a)*ceil(n/a);
    printf("%0.0lf\n",flagstone);
}