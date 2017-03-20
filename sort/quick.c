#include <stdio.h>
#define ARRNUM 10
/*快速排序*/
void print(int arr[], int n);
void quickSort(int arr[], int low, int high);

void print(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void quickSort(int arr[], int low, int high)
{
    if(low >= high)
        return;
    int left = low, right = high;
    int mid = arr[high];

    while (left < right) {
        while (left < right && arr[left] <= mid)
            left++;
        if(left < right)
            arr[right--] = arr[left];

        while (left < right && arr[right] >= mid)
            right--;
        if(left < right)
            arr[left++] = arr[right];
    }

    arr[right] = mid;
    quickSort(arr, low, right - 1);
    quickSort(arr, right + 1, high);
}

int main()
{
    int i, j, temp;
    int arr[ARRNUM] = {12, 45, 4, 96, 42, 55, 7, 36, 9, 78};

    quickSort(arr, 0, ARRNUM - 1);

    print(arr, ARRNUM);
}
