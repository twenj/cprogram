#include <stdio.h>
#define ARRNUM 10
/*选择排序*/
int main() {
    int i, j, min, temp;
    int arr[ARRNUM] = {12, 45, 4, 96, 42, 55, 7, 36, 9, 78};

    for (i = 0; i < ARRNUM; i++){
        min = i;
        for(j = i + 1; j < ARRNUM; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        if(min != i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    for(i = 0; i < ARRNUM; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
