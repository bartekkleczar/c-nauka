#include <stdio.h>
#include <ctype.h>

int main8(){
    char unit;
    float temperature;

    printf("In which scale is temperature?:");
    scanf("%c", &unit);

    unit = toupper(unit);

    switch (unit) {
        case 'C':
            printf("Please enter temperature in Celsius:");
            scanf("%f", &temperature);
            temperature = (temperature  * 9/5) + 32;
            printf("The temperature in Fahrenheit is %.1f", temperature);
            break;
        case 'F':
            printf("Please enter temperature in Fahrenheit:");
            scanf("%f", &temperature);
            temperature = ((temperature - 32)*5)/9;
            printf("The temperature in Fahrenheit is %.1f", temperature);
            break;
        default:
            printf("%c is not valid unit of measurement", unit);
    }

    return 0;
}