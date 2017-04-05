#include <stdio.h>

void shellsort(int v[], int n);
void print(int arr[], int n);

void print(int arr[], int n) {
    int i = 0;
    while (i < n) {
        printf("%d, ", arr[i]);
        i++;
    }
    printf("\n");
    return;
}

int main()
{
    int v[10] = {12, 35, 56, 11, 8, 23, 96, 15, 2, 98};
    shellsort(v, 10);
    print(v, 10);
    //printf("%f", n);
    return 0;
}

void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
                print(v, 10);
                printf("%d %d \n", j, i);
            }


}
