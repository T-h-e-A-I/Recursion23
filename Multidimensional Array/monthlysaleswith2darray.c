#include <stdio.h>
#include <string.h>

int main()
{
    int sales[3][4] = {
        {100, 150, 130, 120},
        {210, 220, 230, 240},
        {300, 310, 320, 330}};

    char month_name[100];
    for (int col = 0; col < 4; col++)
    {
        int total = 0;
        if (col == 0)
            strcpy(month_name, "January");
        else if (col == 1)
            strcpy(month_name, "February");
        else if (col == 2)
            strcpy(month_name, "March");
        else if (col == 3)
            strcpy(month_name, "April");
        for (int row = 0; row < 3; row++)
        {
            total += sales[row][col];
        }
        printf("The total sales in %s was: %d\n",month_name, total);
    }
}
