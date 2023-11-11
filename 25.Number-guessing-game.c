#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guessingGameRekurencja(int number, int guesses){
    int enter = 0;
    printf("\nPodaj numer:");
    scanf("%d", &enter);
    guesses += 1;
    if(enter == number) {
        printf("Brawo zgadłeś numer %d za %d próbą", enter, guesses);
        return;
    }
    if(enter > number){
        printf("Za duży");
    }else{
        printf("Za mały");
    }
    guessingGameRekurencja(number, guesses);
}

int main25(){

    srand(time(0));
    int number = (rand()) % 100+1;
    int guesses = 0;
    /*int enter = 0;
    do{
        printf("\nPodaj numer:");
        scanf("%d", &enter);
        guesses += 1;
        if(enter == number) break;
        if(enter > number){
            printf("Za duży");
        }else{
            printf("Za mały");
        }
    } while (enter != number);

    printf("Brawo zgadłeś numer %d za %d próbą", enter, guesses);*/

    guessingGameRekurencja(number, guesses);

    return 0;
}