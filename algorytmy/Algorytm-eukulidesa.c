#include <stdio.h>


int eukulidesWhile(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int eukulidesRekurencja(int a, int b){
    if(a != b){
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    if(a == b){
        return a;
    }
    else {
        eukulidesRekurencja(a, b);
    }
}

/*
int main() {

    printf("\n%d", eukulidesWhile(1234, 234));
    printf("\n%d", eukulidesRekurencja(1234, 234));

    return 0;
}*/
