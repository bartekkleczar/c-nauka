#include <stdio.h>

int main9(){

    float temp = 25;
    bool sunny = false;

    /*if(temp >= 0 &&  temp <= 30 && sunny){
        printf("The weather is good");
    }
    else {
        printf("The weather is bad");
    }*/

    /*if(temp >= 0 || temp >= 30){
        printf("The weather is good");
    }
    else{
        printf("The weather is good");
    }*/

    if(!sunny){
        printf("Its cloudy");
    }
    else{
        printf("Its sunny");
    }

    return 0;
}
