#include <stdio.h>

int main26(){

    char a = 'X';
    char b[2];
    char c = 'Z';

    printf("\n%d bytes", sizeof(a));
    printf("\n%d bytes", sizeof(b));
    printf("\n%d bytes", sizeof(c));

    printf("\n%p", &a);
    printf("\n%p", &b);
    printf("\n%p", &c);

    return 0;
}