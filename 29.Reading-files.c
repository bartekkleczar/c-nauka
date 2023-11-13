#include <stdio.h>

int main29(){

    FILE *pF = fopen("C:\\Users\\klecz\\coding\\c\\nauka\\poem.txt", "r");
    char buffer[255];

    if(pF == NULL){
        printf("Unable to find file");
    }

    while(fgets(buffer, 255, pF) != NULL){
        printf("%s", buffer);
    }

    fclose(pF);

    return 0;
}