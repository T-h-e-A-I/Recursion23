#include<stdio.h>
#include<math.h>
int main(){
int t;
scanf("%d\n",&t);
for(int i = 1;i <= t;i++){
	for(int j = 0;j < t-i;j++){
		printf(" ");
	}
	for(int j = 0;j < 2*i-1;j++){
		printf("*");
	}
	printf("\n");
}
}