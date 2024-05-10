#include<stdio.h>
int my_str_cmp(const char str1[], const char str2[])
{
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] > str2[i])
            return 1;
        if (str1[i] < str2[i])
            return -1;
    }
    //printf("1st loop failed to decide now choice goes to length.\n");
    int str1_length, str2_length;
    for (str1_length = 0; str1[str1_length] != '\0'; str1_length++)
        ;
    for (str2_length = 0; str2[str2_length] != '\0'; str2_length++)
        ;
    if (str1_length == str2_length)
        return 0;
    if (str1_length > str2_length)
        return 1;
    if (str1_length < str2_length)
        return -1;
    return 0;
}
void string_reverse(char str[])
{
    int i = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;
    for (int j = 0, k = i - 1; j < i / 2; j++, k--)
    {
        int temp = str[k];
        str[k] = str[j];
        str[j] = temp;
    }
}
void my_str_cpy(char dest[], const char src[])
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
int main(){
    char string[100];
    char string_copy[100];
    printf("Please enter a string: ");
    scanf("%s",string);
    my_str_cpy(string_copy,string);
    string_reverse(string);
    if(my_str_cmp(string,string_copy) == 0){
        printf("The string is pallindrome.\n");
    }else{
        printf("The string is not a pallindrome.\n");
    }
}