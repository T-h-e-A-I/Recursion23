#include<stdio.h>
#include<string.h>
//Definition
struct employee
{
    int id;
    char name[50];
    int age;
    float salary;
};

int main(){
    int a,b,c;
    a = 10;
    //Declration
    struct employee e1,e2,e3;
    //Access
    e1.age = 23;
    e1.id = 101325;
    e1.salary = 213.5;
    strcpy(e1.name,"Awesh Islam");
    printf("Employee Details: \n");
    printf("Name: %s\n", e1.name);
    printf("Age : %d\n", e1.age);
    printf("Salary: %f\n", e1.salary);
}