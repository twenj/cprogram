#include <stdio.h>

void main(){
    int c;
    double nb, nt, nl;
    while((c = getchar()) != EOF){
        if(c == ' '){
            ++nb;
        }else if(c == '\t'){
            ++nt;
        }else if(c == '\n'){
            ++nl;
        }
    }
    printf("%.0f %.0f %.0f\n", nb, nt, nl);
}
