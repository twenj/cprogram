#include <stdio.h>

void main(){
    float fahr, celsius;
    float lower, upper, step;

    lower = -30;
    upper = 200;
    step = 10;

    celsius = lower;

    while(celsius <= upper){
        fahr = celsius * 9 / 5 + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
}
