#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main24(){

    srand(time(0));

    int number1 = (rand()) % 6+1;

    printf("%d", number1);

    return 0;
}