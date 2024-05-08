#include <stdio.h>

int main()
{
    int January = 1200;
    int February = 1300;
    int March = 1250;
    int April = 1350;
    int May = 1400;
    int June = 1500;
    int July = 1600;
    int August = 1700;
    int September = 1800;
    int October = 1900;
    int November = 2000;
    int December = 2100;
    int total = January + February + March + April + May + June + July + August + September + October + November + December;
    printf("Total Salary of the year is %d\n", total);
    double average = total / 12;
    printf("Average Salary is: %lf\n", average);
    return 0;
}