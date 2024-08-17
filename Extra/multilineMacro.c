#include<stdio.h>

#define swap(a,b) { \
 a = a + b; \
 b = a - b; \
 a = a - b; \
} \

int main(){
    int a = 10,b = 20;
    swap(a,b);
    printf("a = %d & b = %d\n",a,b);
    char c = 'a',d = 'z';
    swap(c,d);
    printf("c = %c & d = %c\n", c, d);
    double e = 10.1,f = 20.3;
    swap(e,f);
    printf("e = %lf & f = %lf\n",e,f);
}