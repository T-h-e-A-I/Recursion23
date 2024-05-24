#include<stdio.h>
#include<string.h>
int main(){
    int city = 2; //Dhaka = 0  , Chittagong = 1
    int days = 7; //number corresponds to day in a week starting from saturday
    int weather_data[city][days];
    for(int row = 0;row < city;row++){
        if(row == 0) printf("Enter data for Dhaka: \n");
        if(row == 1) printf("Enter data for Chittagong: \n");
        for(int col = 0; col < days;col++){
            printf("Enter the data for %dth day of the week: ",col); //0 indicates saturday
            scanf("%d",&weather_data[row][col]);
        }
        printf("\n");
    }
    char day_name[100];
    for(int row = 0;row < city;row++){
        if(row == 0) printf("Weather data for Dhaka: \n");
        if(row == 1) printf("Weather data for Chittagong: \n");
        for(int col = 0; col < days;col++){
            if(col == 0) strcpy(day_name,"Saturday");
            if(col == 1) strcpy(day_name,"Sunday");
            if(col == 2) strcpy(day_name,"Monday");
            if(col == 3) strcpy(day_name,"Tuesday");
            if(col == 4) strcpy(day_name,"Wednesday");
            if(col == 5) strcpy(day_name,"Thursday");
            if(col == 6) strcpy(day_name,"Friday");
            printf("The temprature for %s is: %d\n",day_name,weather_data[row][col]);
        }
        printf("\n");
    }
}

    //               Saturday0 Sunday1 Monday2 Tuesday3 Wednesday4 Thursday5 Firday6
    // Dhaka      0     
    // Chittagong 1