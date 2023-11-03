#include <stdio.h>


double square(double x)
{
    return x*x;
}


int main11(){

    double x = square(3.14);

    printf("%lf", x);

    return 0;
}