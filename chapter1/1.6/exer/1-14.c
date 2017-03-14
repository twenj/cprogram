#include <stdio.h>
#define AASCII 97
#define LETTER 26
#define ULCHANGE 32

int main() {
    int c,i;
    int arr[LETTER];

    for(i = AASCII; i < AASCII + LETTER; i++){
        arr[i] = 0;
    }

    while((c = getchar()) != EOF){
        if(c >= AASCII - ULCHANGE && c <= AASCII + LETTER - ULCHANGE){
            c = c + ULCHANGE;
            arr[c]++;
        }else{
            arr[c]++;

        }
    }

    for(i = AASCII; i < AASCII + LETTER; i++) {
        printf("%c %d\n", i, arr[i]);
    }
}
