#include <stdio.h>
#define ARRNUM 10
/*希尔排序*/
int main() {
    int i, j, temp, step;
    int arr[ARRNUM] = {12, 45, 4, 96, 42, 55, 7, 36, 9, 78};

    step = ARRNUM / 2;

    while (step >= 1){
        for(i = step; i < ARRNUM; ++i){
            temp = arr[i];
            j = i - step;
            while(temp < arr[j]){
                arr[j + step] = arr[j];
                j -= step;
            }
            arr[j + step] = temp;
        }
        step = step / 2;
    }

    for(i = 0; i < ARRNUM; i++){
        printf("%d, ", arr[i]);
    }

    printf("\n");
}
