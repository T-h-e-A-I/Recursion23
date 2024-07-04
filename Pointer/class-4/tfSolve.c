#include<stdio.h>
int main(){
    int p[2][3][2] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int p2[2][3][2] = {{{1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}}}; //same as p
    printf("The value of p+1 is %p\n",p+1);
    printf("%d\n",*(*(*p+1)+2));
    // for(int i = 0;i < 2;i++){
    //     for(int j= 0;j < 3;j++){
    //         for(int k = 0;k < 2;k++){
    //             printf("The value of p[%d][%d][%d] is %p\n",i,j,k,&p[i][j][k]);
    //         }
    //     }
    // }
    
}

// p[0][0][0] = 1a8
// p[0][0][1] = 1ac
// p[0][1][0] = 1b0
// p[0][1][1] = 1b4
// p[0][2][0] = 1b8
// p[0][2][1] = 1bc
// p[1][0][0] = 1c0