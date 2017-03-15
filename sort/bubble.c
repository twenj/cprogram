#include <stdio.h>
#define ARRNUM 10
/*冒泡排序*/
int main() {
    int i, j, temp;
    int arr[ARRNUM] = {12, 45, 4, 96, 42, 55, 7, 36, 9, 78};

    for (i = 0; i < ARRNUM; i++){
        for(j = ARRNUM - 1; j > i; j--){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i = 0; i < ARRNUM; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
