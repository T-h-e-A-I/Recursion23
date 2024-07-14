#include<stdio.h>
void bitPrinting1(int n){
    int bits = sizeof(n)*8;
    for(int i = bits-1;i >= 0;i--){
        int extraction = (1<<i)&n;
        if(extraction == 0) printf("0");
        else printf("1");
    }
    printf("\n");
}
void bitPrinting2(int n){
    int bits = sizeof(n) * 8;
    for (int i = bits - 1; i >= 0; i--)
    {
        int extraction = (n >> i) & 1;
        printf("%d",extraction);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    bitPrinting1(n);
    bitPrinting2(n);
}