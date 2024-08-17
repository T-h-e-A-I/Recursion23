#include<stdio.h>
#include<string.h>
struct address
{
    char city[50];
    int zip;
};
struct person
{
    char name[50];
    int age;
    struct address addr;
};
int main(){
    struct person p;
    printf("Enter your name: ");
    scanf("%s",p.name);
    printf("Enter your age: ");
    scanf("%d",&p.age);
    printf("Enter your cityname: ");
    scanf("%s",p.addr.city);
    printf("Enter your zipcode: ");
    scanf("%d",&p.addr.zip);
    printf("Person Details: \n");
    printf("Name %s\nAge %d\nCity %s\nZipcode %d\n",p.name,p.age,p.addr.city,p.addr.zip);
    return 0;
}

