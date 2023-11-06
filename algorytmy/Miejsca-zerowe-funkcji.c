#include <stdio.h>
#include <math.h>

void funkcjaKwadratowa(int a, int b, int c){
    double delta =  b*b-4*a*c;
    if(delta == 0){
        double x = -b / (2*a);
        printf("x wynosi %f", x);
    }
    delta = sqrt(delta);
    double x1 = (-b + delta) / (2*a);
    double x2 = (-b - delta) / (2*a);

    printf("x1 wynosi %f | x2 wynosi %f", x1, x2);
}

int main(){

    funkcjaKwadratowa(-2, 3, 4);

    return 0;
}