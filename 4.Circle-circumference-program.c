#include <stdio.h>

int main4(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter radius of circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);

    return 0;
}