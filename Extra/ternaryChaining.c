#include <stdio.h>
int main()
{
    int number;
    printf("Enter your percentage: ");
    scanf("%d", &number);
    char grade;
    // if (number >= 90)
    //     grade = 'A';
    // else if (number >= 80)
    //     grade = 'B';
    // else if (number >= 70)
    //     grade = 'C';
    // else if (number >= 60)
    //     grade = 'D';
    // else
    //     grade = 'F';
    grade = (number >= 90) ? 'A' : (number >= 80) ? 'B'
                               : (number >= 70)   ? 'C'
                               : (number >= 60)   ? 'D'
                                                  : 'F';
    printf("The grade is %c\n",grade);
}