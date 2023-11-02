#include <stdio.h>

int main1() {
    int age = 16;
    float gpa = 2.05;
    char grade = 'C';
    char name[] = "Bartek"; //lista znaków (kurwa kto to wymyślił)

    printf("Hello %s\n", name); // s -> string
    printf("You are %d years old\n", age); // d -> decimal
    printf("Your average grade is %c\n", grade); // c -> char
    printf("Your gpa is %f\n", gpa); // f -> float

    return 0;
}
