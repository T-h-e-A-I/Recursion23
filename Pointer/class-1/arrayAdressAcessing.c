#include<stdio.h>

int main(){
    int a[5] = {1,2,3,4,5};
    for(int i = 0;i < 5;i++){
        printf("The value of %dth element is %d and adress of %dth element is %p\n"
        ,i,a[i],i,&a[i]);
    }
    printf("The size of array is: %zu bytes\n",sizeof(a));
}

// d0+4 = d4 + 4 = d8 + 4 = dc + 4 = e0