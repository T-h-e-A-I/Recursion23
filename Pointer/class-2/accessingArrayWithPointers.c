#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int *p;
    p = &arr[0];
    p = arr;  // same as p = &arr[0]
    //p+1 = &arr[1]
    //p+2 = &arr[2]
    printf("The value of arr[0] is %d\n",*p); //arr[0]
    printf("The value of arr[1] is %d\n", *(p + 1)); // arr[1]
    printf("The value of arr[2] is %d\n", *(p + 2)); // arr[2]
    printf("The value of arr[3] is %d\n", *(p + 3)); // arr[3]
    printf("The value of arr[4] is %d\n", *(p + 4)); // arr[4]

    for(int i = 0;i  < 5;i++){
        printf("The value of arr[%d] is %d\n",i,*(p+i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of arr[%d] is %d\n",i, *p);
        p++; // p = p+1
    }
}

// p = 1c0
//p+1 = 1c1 ( wrong)

//p + 1 = 1c4