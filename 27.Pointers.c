#include <stdio.h>


void change(int *pAge){
    *pAge = 22;
}

int main47(){

    int age = 21;
    int *pAge = NULL;
    pAge = &age;

    int year = 23;
    int *pYear = NULL;
    pYear = &year;

    /*printf("\n%p address of age", &age);
    printf("\n%p value of pAge", pAge);

    printf("\n%d size of age", sizeof(age));
    printf("\n%d size of pAge", sizeof(pAge));

    printf("\n%d value of age", age);
    printf("\n%d value at stored address", *pAge);*/

    change(pAge);
    change(pYear);
    printf("\n%d - %d", *pAge, *pYear);
    return 0;
}