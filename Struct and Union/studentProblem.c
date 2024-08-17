#include<stdio.h>
typedef struct
{
    char first_name[50];
    char last_name[50];
} fullname;
typedef struct{
    fullname name;
    int roll;
    float percentage;
    char grade;
} student;
void input(student *s){
    printf("Enter the student name: ");
    scanf("%s %s",s->name.first_name,s->name.last_name);
    printf("Enter the student roll: ");
    scanf("%d",&s->roll);
    printf("Enter student percentage: ");
    scanf("%f",&s->percentage);
}
void output(student s){
    printf("Student Details: Name: %s %s Roll: %d Percentage %f Grade %c\n",s.name.first_name,s.name.last_name,s.roll,s.percentage,s.grade);
}
char grade_calculation(float percentage)
{
    if(percentage >= 90) return 'A';
    if (percentage >= 80)
        return 'B';
    if (percentage >= 70)
        return 'C';
    if (percentage >= 60)
        return 'D';
    return 'F';
}
void grade(student *s){
    if(s->percentage >= 90) s->grade = 'A';
    else if(s->percentage >= 80) s->grade = 'B';
    else if (s->percentage >= 70)
        s->grade = 'C';
    else if (s->percentage >= 60)
        s->grade = 'D';
    else s->grade = 'F';
}
int main(){
    student s_arr[3];
    for(int i = 0;i < 3;i++){
        input(&s_arr[i]);
        grade(&s_arr[i]);
        //s_arr[i].grade = grade_calculation(s_arr[i].percentage);
    }
    for (int i = 0; i < 3; i++)
    {
        output(s_arr[i]);
    }
}
