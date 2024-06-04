#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n%4 != 0) printf("NO\n");
        else{
            printf("YES\n");
            int sumEven = 0;
            int sumOdd = 0;
            for(int i = 1;i <= n/2;i++){
                printf("%d ",2*i);
                sumEven += 2*i;
            }
            for (int i = 1; i <= n / 2-1; i++)
            {
                printf("%d ", 2 * i-1);
                sumOdd += 2 * i-1;
            }
            printf("%d\n",sumEven-sumOdd);
        }
    }
    
}