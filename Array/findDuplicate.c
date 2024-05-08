#include<stdio.h>

int main(){
    int arr[9] = {1,1,2,2,3,4,4,5,4};

    int found[9] = {0,0,0,0,0,0,0,0,0};

    int has_duplicate = 0;
    for(int i = 0; i < 9;i++){
        has_duplicate = 0;
        if(found[i]) continue;
        for(int j = i+1;j < 9;j++){
            if(arr[i] == arr[j]){
                found[j] = 1;
                has_duplicate = 1;
            }
        }
        if(has_duplicate) printf("%d has duplicate\n",arr[i]);
    }
}