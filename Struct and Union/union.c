#include<stdio.h>
union point
{
    int x;
    int y;
};

int main(){
    union point p1;
    p1.x = 10;
    printf("The x co-ordinate is : %d\n",p1.x);
    p1.y = 20;
    printf("The y co-ordinate is : %d\n", p1.y);
}