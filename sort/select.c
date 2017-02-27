#include <stdio.h>

void main(){
    
    int arr[10] = {2, 4, 6, 8, 9, 23,56,74,23,45};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i;
    int j;
    int tmp;

    for(i = 0; i < len; i++) {
        tmp = arr[i];
        for(j = i; j < len; j++){
            if(arr[j] < tmp){
                tmp = arr[j];
            }
        }
    }

    for(i = 0; i < len; i++) {
        printf("%d,\n", arr[i]);
    }

}
