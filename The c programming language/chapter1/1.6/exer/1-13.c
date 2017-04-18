#include <stdio.h>
#define MAXLONG 15
#define MAXNUM 10
#define IN 1
#define OUT 0

void main(){
    int c,state,wnum,i,j;
    int wn[MAXNUM];
    for(i = 0; i < MAXNUM; i++){
        wn[i] = 0;
    }
    state = OUT;
    i = -1;
    wnum = 0;
    
    while(((c = getchar()) != EOF) && i < MAXNUM){
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state == IN){
                wn[i] = wnum;
                wnum = 0;
                state = OUT;
            }
        }else{
            if(state == OUT){
                ++i;
                state = IN; 
            }
            if(wnum < MAXLONG){
                ++wnum; 
            }
        }
    }

    for(i = 0; i < MAXNUM; i++){
        for(j = 0; j < wn[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
} 
