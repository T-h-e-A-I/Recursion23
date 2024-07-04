#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int operate(int a,int b,int (*op)(int,int)){
    return op(a,b);
}
int main()
{
    int result = operate(6, 5, &add);
    printf("The value of result is %d\n", result);
    int result2 = operate(6, 5, &sub);
    printf("The value of result2 is %d\n", result2);
    return 0;
}