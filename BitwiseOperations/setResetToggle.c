#include<stdio.h>
void bitPrinting1(int n)
{
    int bits = sizeof(n) * 8;
    int count = 0;
    for (int i = bits - 1; i >= 0; i--)
    {
        count++;
        int extraction = (1 << i) & n;
        if (extraction == 0)
            printf("0");
        else
            printf("1");
        if(count % 4 == 0) printf(" ");
    }
    printf("\n");
}
int main(){
    int n = 11729; //0010 1101 1101 0001
    bitPrinting1(n);
    int mask =  3840;//0000 1111 0000 0000
    int setResult = n | mask;
    printf("Set Result: ");
    bitPrinting1(setResult);
    int resetResult = n & (~mask);
    printf("Reset Result: ");
    bitPrinting1(resetResult);
    int toggleResult = n ^ mask;
    printf("Toggle Result: ");
    bitPrinting1(toggleResult);
}