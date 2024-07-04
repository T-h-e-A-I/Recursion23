#include <stdio.h>
#include <stdlib.h>

int *allocateMemory(int size)
{
    int *p = malloc(sizeof(int) * size);
    return p;
}
int main()
{
    int *p = allocateMemory(3);
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    printf("The value stored in pointers are: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ",p[i]);
    }
    free(p);
}