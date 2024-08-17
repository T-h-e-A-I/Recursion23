#include<stdio.h>

int main(){
    printf("Enter two numbers: ");
    double a,b;
    scanf("%lf %lf",&a,&b);
    printf("Enter a choice: \n+ to add\n- to subtract\n* to multiply\n\\ to divide\n");
    char choice;
    scanf("%c", &choice);
    double answer;
    if(choice == '+') answer = a+b;
    else if(choice == '-') answer = a-b;
    else if(choice == '*') answer = a*b;
    else if(choice == '\\') answer = a/b;
    else{
        printf("Invalid Input.\n");
        return 1;
    }
    printf("The answer is %lf\n",answer);
    return 0;
}