#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("inputNumbers.txt", "r");
    if (fp == NULL)
    {
        printf("file open failed.\n");
        return 1;
    }
    FILE *fp1;
    fp1 = fopen("outputNumbersAlt.txt", "w");
    if (fp1 == NULL)
    {
        printf("file open failed.\n");
        return 1;
    }
    char line[50];
    int a, b;
    while (fgets(line,sizeof(line),fp) != NULL)
    {
        sscanf(line,"%d %d",&a,&b);
        fprintf(fp1,"%d + %d = %d\n",a,b,a+b);
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}