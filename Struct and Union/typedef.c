#include <stdio.h>
#include <math.h>
typedef struct
{
    int x;
    int y;
} point;

int main()
{
    point p1, p2;
    point p3;
    printf("Enter the co-ordinates of first point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the co-ordinates of second point: ");
    scanf("%d %d", &p2.x, &p2.y);
    float distance = sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    printf("The distance between two points are: %f\n", distance);
}