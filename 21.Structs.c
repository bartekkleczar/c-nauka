#include <stdio.h>
#include <string.h>

struct Player{
    char name[12];
    int score;
};

int main21(){

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Bartek");
    player1.score = 4;

    strcpy(player2.name, "klenczi");
    player2.score = 5;

    printf("\n%s", player1.name);
    printf("\n%d", player1.score);

    printf("\n%s", player2.name);
    printf("\n%d", player2.score);

    return 0;
}