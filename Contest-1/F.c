#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int count = 0;
        while (n)
        {
            count += n/5;
            n = n/5;
        }
        printf("%d\n",count);
    }
    
}