#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int totalStudnets;
    printf("Enter the number of intital students: ");
    scanf("%d", &totalStudnets);
    char **nameOfStudents;
    nameOfStudents = (char **)malloc(totalStudnets * sizeof(char*));
    if (nameOfStudents == NULL)
    {
        printf("Memory allocation failed\n");
        exit(0);
    }
    char input[100];
    for (int i = 0; i < totalStudnets; i++)
    {
        printf("Enter the name of %dth student: ", i + 1);
        scanf("%s", input);
        nameOfStudents[i] = (char*)malloc(strlen(input)*sizeof(char));
        if(nameOfStudents == NULL){
            printf("Memory allocation failed\n");
            exit(0);
        }
        strcpy(nameOfStudents[i],input);
    }
    char answer;
    scanf("%c", &answer);
    int newStudents;
    while (1)
    {
        printf("1) Admit new students\n2) View Students\n3) Exit\n");
        scanf("%c", &answer);
        if (answer == '1')
        {
            printf("Enter the number of new studnets: ");
            scanf("%d", &newStudents);
            nameOfStudents = (char**)realloc(nameOfStudents, (totalStudnets + newStudents) * sizeof(char*));
            if (nameOfStudents == NULL)
            {
                printf("Memory reallocation failed\n");
                exit(0);
            }
            for (int i = totalStudnets; i < totalStudnets+newStudents; i++)
            {
                printf("Enter the name of %dth student: ", i + 1);
                scanf("%s", input);
                nameOfStudents[i] = (char *)malloc(strlen(input) * sizeof(char));
                if (nameOfStudents == NULL)
                {
                    printf("Memory allocation failed\n");
                    exit(0);
                }
                strcpy(nameOfStudents[i], input);
            }
            totalStudnets = totalStudnets + newStudents;
        }
        else if (answer == '2')
        {
            for (int i = 0; i < totalStudnets; i++)
            {
                printf("The name number of %d th student is %s\n", i + 1, nameOfStudents[i]);
            }
        }
        else
        {
            break;
        }
        scanf("%c", &answer);
    }
    free(nameOfStudents);
}


