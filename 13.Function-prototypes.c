#include <stdio.h>

void hello(char[], int);

int main13(){

    char name[] = "Bartek";
    int age = 16;

    hello(name, age);

    return 0;
}
void hello(char name[], int age)
{
    printf("Hello %s", name);
    printf("\nYou are %d", age);
}
