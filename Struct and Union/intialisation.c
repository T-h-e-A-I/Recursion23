#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};

int main()
{
    struct point p1;
    p1.x = 1;
    p1.y = 2;
    struct point p2 = {3,4};
    float distance = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    printf("The distance between two points are: %f\n", distance);
}