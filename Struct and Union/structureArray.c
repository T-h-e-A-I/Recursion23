#include<stdio.h>
#include<string.h>
struct person
{
    char name[50];
    int age;
};

int main(){
    struct person person_array[10];
    person_array[0].age = 10;
    strcpy(person_array[0].name,"Awesh Islam");
    person_array[1].age = 15;
    strcpy(person_array[1].name, "Jaber Ahmed");
    person_array[2].age = 20;
    strcpy(person_array[2].name, "Sharaor Emon");
    for(int i = 0;i < 3;i++){
        printf("Person Details: \nName %s\nAge %d\n",person_array[i].name,person_array[i].age);
    }
    return 0;
}