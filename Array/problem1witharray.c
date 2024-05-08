#include <stdio.h>

int main()
{
    int monthlySales[12] = {1200,1300,1250,1350,1400,1500,1600,1700,1800,1900,2000,2100};
    int total = 0;
    for(int i = 0;i < 12;i++){
        total += monthlySales[i];
    }
    printf("Total Salary of the year is %d\n", total);
    double average = (double)total / 12;
    printf("Average Salary is: %lf\n", average);
    return 0;
}