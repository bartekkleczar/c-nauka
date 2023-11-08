#include <stdio.h>

int main18(){

    int numbers[3][3] = {{1, 2, 3}, {4 ,5 ,6}, {6, 7, 8}};
    numbers[0][0] = 1;

    int rows = sizeof(numbers)/(sizeof(numbers[0]));
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}
