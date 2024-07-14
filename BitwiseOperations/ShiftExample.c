#include<stdio.h>
int main(){
    int n,shift;
    printf("Please enter a number: ");
    scanf("%d",&n);
    printf("Enter the amount by which you want to shift your number: ");
    scanf("%d",&shift);
    int leftShiftResult = n<<shift;
    printf("The number after left shifting is %d\n",leftShiftResult);
    int rightShiftResult = n>>shift;
    printf("The number after right shift %d\n",rightShiftResult);
    return 0;
}