#include <stdio.h>

int main7(){

    char grade;

    printf("Enter a letter grade:");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("perfect!");
            break;
        case 'B':
            printf("good!");
            break;
        case 'C':
            printf("okay!");
            break;
        case 'D':
            printf("at least not F...!");
            break;
        case 'F':
            printf("failed!");
            break;
        default:
            printf("Please enter only valid grades");
    }
    return 0;
}