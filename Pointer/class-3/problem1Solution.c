#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalStudnets;
    printf("Enter the number of total students: ");
    scanf("%d",&totalStudnets);
    int *rollNumberOfStudents;
    rollNumberOfStudents = (int*)malloc(totalStudnets*sizeof(int));
    if(rollNumberOfStudents == NULL){
        printf("Memory allocation failed\n");
        exit(0);
    }
    for(int i = 0;i < totalStudnets;i++){
        printf("Enter the roll number of %dth student: ",i+1);
        scanf("%d",(rollNumberOfStudents+i));
    }
    char answer;
    scanf("%c",&answer);
    int newStudents;
    while (1)
    {
        printf("1) Admit new students\n2) View Students\n3) Exit\n");
        scanf("%c",&answer);
        if(answer == '1'){
            printf("Enter the number of new studnets: ");
            scanf("%d",&newStudents);
            rollNumberOfStudents = realloc(rollNumberOfStudents, (totalStudnets + newStudents) * sizeof(int));
            if(rollNumberOfStudents == NULL){
                printf("Memory reallocation failed\n");
                exit(0);
            }
            for(int i = totalStudnets;i < totalStudnets+newStudents;i++){
                printf("Enter the roll number of %d th new student.",i+1);
                scanf("%d",(rollNumberOfStudents+i));
            }
            totalStudnets = totalStudnets+newStudents;
        }else if(answer == '2'){
            for(int i = 0;i < totalStudnets;i++){
                printf("The roll number of %d th student is %d\n",i+1,*(rollNumberOfStudents+i));
            }
        }else{
            break;
        }
        scanf("%c",&answer);
    }
    free(rollNumberOfStudents);
    
}