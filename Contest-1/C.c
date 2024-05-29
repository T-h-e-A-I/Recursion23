#include<stdio.h>


int main(){
    double hour,minute;
    scanf("%lf %lf",&hour,&minute);
    double angle = 5.5*minute-30*hour;
    if(angle < 0) angle = -angle;
    if(angle > 180) angle = 360-angle;
    printf("%lf\n",angle);
}