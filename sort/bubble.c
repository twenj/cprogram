#include <stdio.h>

void main(){
    int arr[10] = {2, 4, 6, 8, 9, 23,56,74,23,45};
    int i;
    int j;
    int len = sizeof(arr) / sizeof(arr[0]);
    int tmp;

    for(i = 0; i< len; i++){
        for(j = len; j > 0; j--){
            if(arr[j] < arr[j - 1]){
                tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }

    for(i = 0; i < len; i++){
        printf("%d,\n", arr[i]);
    }
}
