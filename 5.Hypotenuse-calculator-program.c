#include <stdio.h>
#include <math.h>

int main5(){

    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lfl", &A);

    printf("Enter side B: ");
    scanf("%lfl", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);
    return 0;
}3