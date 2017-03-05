#include <stdio.h>

void main(){
    int zero, c;

    zero = 0;

    while((c = getchar()) != EOF){
        if(c != ' ' || zero == 0)
            putchar(c);
        if(c == ' ')
            ++zero;
        else if(zero != 0)
            zero = 0;
    }
}
