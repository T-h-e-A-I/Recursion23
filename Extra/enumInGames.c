#include<stdio.h>
enum GAME_STATE{
    MENU,
    PLAYING,
    PAUSED,
    GAME_OVER
};
int main(){
    enum GAME_STATE currentState;
    printf("Enter a number 0 for MENU 1 to PLAY 2 to PAUSE 3 to QUIT\n");
    scanf("%d",&currentState);
    if(currentState == MENU) printf("You are in mainmenu.\n");
    else if(currentState == PLAYING) printf("You are playing.\n");
    else if(currentState == PAUSED) printf("You paused the game.\n");
    else printf("Game Over.\n");
}