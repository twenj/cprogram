#include <stdio.h>
#define ARRNUM 10
/*直接插入排序*/
int main() {
    int i, j, temp;
    int arr[ARRNUM] = {12, 45, 4, 96, 42, 55, 7, 36, 9, 78};

    for(i = 1; i < ARRNUM; i++){
        if(arr[i - 1] > arr[i]){
            temp = arr[i];
            j = i - 1;
            while(temp < arr[j]){
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
    }

    for(i = 0; i < ARRNUM; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
