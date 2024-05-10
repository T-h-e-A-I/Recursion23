#include <stdio.h>
#include <string.h>
int main()
{
    printf("message: ");
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int frequency[128];
    for(int i = 0;i < 128;i++){ //i = 65 //target = 'A'
        int count = 0;
        for(int j = 0;j < strlen(str);j++){ //string er last porjonto check koro
            if(str[j] == i) count++; //i = 65 str[i] = 'A'/65
        }
        frequency[i] = count;
    }
    printf("[");
    for(int i = 0;i < 128;i++){
        printf("%c:%d",i,frequency[i]);
        if(i != 127)
            printf(", ");
    }
    printf("]");
}