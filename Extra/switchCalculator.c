#include <stdio.h>

int main()
{
    printf("Enter two numbers: ");
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Enter a choice: \n+ to add\n- to subtract\n* to multiply\n\\ to divide\n");
    char choice;
    scanf("%c", &choice);
    scanf("%c", &choice);
    //printf("%c",choice);
    double answer = 0;
    switch (choice) {
        case '+':
            answer = a+b;
            printf("The answer is %lf\n", answer);
            break;
        case '-':
            answer = a-b;
            printf("The answer is %lf\n", answer);
            break;
        case '*':
            answer = a*b;
            printf("The answer is %lf\n", answer);
            break;
        case '\\':
            answer = a/b;
            printf("The answer is %lf\n", answer);
            break;
        default:
            printf("Invalid Input\n");
            break;
    }
    return 0;
}