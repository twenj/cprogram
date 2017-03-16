#include <stdio.h>
#define ARRNUM 10
/*堆排序*/
void print(int arr[], int n);
void HeapSort(int arr[], int n);
void HeapAdjust(int arr[], int i, int n);

void print(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}
/**
 * 调整数组元素位置
 * @param arr 待调整的堆数组
 * @param i 待调整的数组元素的位置
 * @param n 数组长度
 */
void HeapAdjust(int arr[], int i, int n)
{
    int nChild, nTemp;
    for (; 2 * i + 1 < n; i = nChild)
    {
        //nChild:左子结点的位置是 父结点位置 * 2 + 1 右子结点 nChild + 1
        nChild = 2 * i + 1;
        //得到子结点中较大的结点
        if(nChild != n - 1 && arr[nChild + 1] > arr[nChild])
            ++nChild;
        //如果较大的子节点大于父节点那么把较大的子节点往上移动，替换他的父节点
        if(nTemp < arr[nChild])
        {
            nTemp = arr[i];
            arr[i] = arr[nChild];
            arr[nChild] = nTemp;
        }
        else
        {
            break;
        }
    }
}

/**
 * 堆排序方法
 * @param arr 数组元素
 * @param n 数组长度
 */
void HeapSort(int arr[], int n)
{
    int i;
    //调整序列的前半部分元素，（即每个有孩子的结点）调整完之后是一个大顶堆，第一个元素是序列的最大元素
    //n / 2 - 1 是最后一个非叶子节点
    for (i = n / 2 - 1; i >= 0; i--)
    {
        HeapAdjust(arr, i, n);
    }

    /*
     * 从最后一个元素开始对序列进行调整，不断缩小调整
     * 的范围直到第一个元素
     * 循环里是把第一个元素和当前最后一个元素进行交换
     * 保证当前的最后一个位置的元素是现在这个序列最大的
     * 不断的缩小调整heap的范围，每一次调整完毕第一个元素是当前序列最大的
     */
    for (i = n - 1; i >= 0; --i)
    {
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        HeapAdjust(arr, 0, i);
    }

}

int main()
{
    int i, j, temp;
    int arr[ARRNUM] = {12, 45, 4, 96, 42, 55, 7, 36, 9, 78};

    HeapSort(arr, ARRNUM);
    print(arr, ARRNUM);
}
