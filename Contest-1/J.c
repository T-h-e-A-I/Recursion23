#include<stdio.h>
int main(){
    int arr[6][6];
    for(int i = 0;i < 6;i++){
        for(int j = 0;j < 6;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max = -1000000;
    int tsum = 0;
    for(int i = 0;i < 4;i++){
        tsum = 0;
        for(int j = 0;j < 4;j++){
            tsum = arr[i][j] + arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j+1];
            if(tsum > max) max = tsum;
        }
    }
    printf("%d\n",max);
}