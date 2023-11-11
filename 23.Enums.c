#include <stdio.h>

typedef enum {
    Sun = 1 , Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7
} Day;

int main23(){
    Day today = Sun;
    printf("%d", today);

    if(today == Sun || today == Sat){
        printf("\ntoday is weekend");
    }

    return 0;
}