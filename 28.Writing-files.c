#include <stdio.h>

int main28(){

    // w - write
    // r - read
    // a - append

    FILE * pF = fopen("C:\\Users\\klecz\\Desktop\\test.txt", "w");

    fprintf(pF, "\ncos tam");

    fclose(pF);

    /*if(remove("test.txt") == 0){ //usunęło
        printf("Usunęło plik");
    }else {
        printf("Nie usunęło");
    }*/
    return 0;
}