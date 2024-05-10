#include <stdio.h>
#include <string.h>
int main()
{
    printf("message: ");
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int frequency[26];
    for (int i = 97; i < 123; i++)
    { // i = 97 //target = 'a' //i = 98 ///target='b'
        int count = 0;
        for (int j = 0; j < strlen(str); j++)
        { // string er last porjonto check koro
            
            if (str[j] >= 'a' && str[j] <= 'z' && str[j] == i)
                count++; // i = 65 str[i] = 'A'/65
        }
        frequency[i-'a'] = count;
    }
    printf("[");
    for (int i = 97; i < 123; i++)
    {
        printf("%c:%d", i, frequency[i-'a']);
        if (i != 122)
            printf(", ");
    }
    printf("]");
}