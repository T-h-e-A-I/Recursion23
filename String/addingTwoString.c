#include <stdio.h>

int main()
{
    char str1[100] = "hello";
    char str2[100] = "world";
    char str3[100];
    int i = 0;
    int src_length = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str3[src_length] = str1[i];
        src_length++;
    }
    printf("the string after first copy is: %s\n",str3);
    for (i = 0; str2[i] != '\0'; i++)
    {
        str3[src_length] = str2[i];
        src_length++;
    }
    str3[src_length] = '\0';
    printf("the string after adding is: %s\n",str3);
}