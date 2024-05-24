#include <stdio.h>
int main()
{
    int sales[3][4] = {
        {100, 150, 130, 120},
        {210, 220, 230, 240},
        {300, 310, 320, 330}};
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += sales[i][0];
    }
    printf("The total sales in january was: %d\n", total);
    total = 0;
    for(int i = 0;i < 3;i++){
        total += sales[i][1];
    }
    printf("The total sales in february was: %d\n",total);
    total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += sales[i][2];
    }
    printf("The total sales in march was: %d\n", total);
    total = 0;
    for (int i = 0; i < 3; i++)
    {
        total += sales[i][3];
    }
    printf("The total sales in april was: %d\n", total);
}
