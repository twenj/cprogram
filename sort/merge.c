#include <stdio.h>
#define ARRNUM 10
/*归并排序*/
void print(int arr[], int n);
void mergeSort(int arr[], int first, int last, int temp[]);
void mergeArray(int arr[], int first, int mid, int last, int temp[]);

void print(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
void mergeArray(int arr[], int first, int mid, int last, int temp[])
{
    int m1 = first, n1 = mid;
    int m2 = mid + 1, n2 = last;
    int k = 0;

    while (m1 <= n1 && m2 <= n2) {
        if (arr[m1] > arr[m2]) {
            temp[k++] = arr[m2++];
        } else {
            temp[k++] = arr[m1++];
        }
    }

    while (m1 <= n1)
        temp[k++] = arr[m1++];
    while (m2 <= n2)
        temp[k++] = arr[m2++];

    for(int i = 0; i < k; i++)
        arr[first + i] = temp[i];
}

void mergeSort(int arr[], int first, int last, int temp[])
{
    if (first < last) {
        int mid = (first + last) / 2;
        mergeSort(arr, first, mid, temp);
        mergeSort(arr, mid + 1, last, temp);
        mergeArray(arr, first, mid, last, temp);
    }
}

int main()
{
    int i, j, temp;
    int arr[ARRNUM] = {12, 45, 4, 96, 42, 55, 7, 36, 9, 78};
    int p[ARRNUM];

    mergeSort(arr, 0, ARRNUM - 1, p);

    print(arr, ARRNUM);
}
