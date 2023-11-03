#include <stdio.h>

void birthday(char name[], int age)
{
    printf("Happy birthday dear %s", name);
    printf("\nYou are %d years old", age);
}

int main10(){

    char name[] = "Bartek";
    int age = 21;

    birthday(name, age);

    return 0;
}


