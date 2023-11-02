#include <stdio.h>
#include <string.h>

int main3(){

    char name[25];
    int age;

    printf("What is your name?:");
    //scanf("%s", &name); // bez spacji
    fgets(name, 25, stdin); // ze spacjami
    name[strlen(name)-1] = '\0'; // pozbycie sie \n na końcu wprowadzonego stringa

    printf("How old are you?:");
    scanf("%d", &age);

    printf("\n Hello %s how are you", name);
    printf("\n You are %d years old", age);

    return 0;
}
