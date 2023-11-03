#include <stdio.h>
#include <string.h>

int main14(){

    char string1[] = "Dupa";
    char string2[] = "Kupa";

    strlwr(string1); // lowercase
    strupr(string1); // uppercase
    strcat(string1, string2); // string + string
    strncat(string1, string2,1); // string2 n chars to string1
    strcpy(string1, string2); // string1 => string2
    strncpy(string1, string2, 1); // string2 (n chars) => string1

    strset(string1, '*'); // string1 => "****"
    strnset(string1, '*', 1); // string1 (n chars)=> "*upa"
    strrev(string1); // odwrócenie

    strlen(string1); // długość string
    strcmp(string1, string2); // if(x == y) -> 0
    strncmp(string1, string2, 1); // if(x[0..n] == y[0..n]) -> 0
    strcmpi(string1, string2); // if(x == y) -> 0 [ignoruje rozmiar]
    strnicmp(string1, string2, 1); // if(x[0..n] == y[0..n]) -> 0 [ignoruje rozmiar]

    return 0;
}