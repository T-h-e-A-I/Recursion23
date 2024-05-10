#include<stdio.h>
void my_str_cat(char dest[],const char src[]){
    int dest_length = 0;
    while (dest[dest_length] != '\0')
    {
        dest_length++;
    }
    int src_length = 0;
    while (src[src_length] != '\0')
    {
        dest[dest_length] = src[src_length];
        src_length++;
        dest_length++;
    }
    dest[dest_length] = '\0';
}
int main(){
    char dest[1000] = "Hello ";
    char src[1000] = "world";
    my_str_cat(dest,src); 
    printf("Source string after concat: %s\n",src);
    printf("Destination string after concat: %s\n",dest);
}

//dest[] = "hello "
//src[] = "wordl"

//dest[] = "hello world"