#include<stdio.h>
int main(){
    int sales[3][4] = {
        {100,150,130,120},
        {210,220,230,240},
        {300,310,320,330}
    };
    printf("The sale for product C in february is %d\n",sales[2][1]);
    printf("The sale for product B in april %d\n",sales[1][3]);
}

