// template.cpp
#include <iostream>
using namespace std;

template <typename T>
T max5(T [], int n);

int main() {
    int arr[5] = {6, 10, 12, 30, 24};
    int max = 0;
    max = max5(arr, 5);
    cout << max << endl;
}

template <typename T>
T max5(T arr[], int n) {
    T max = arr[0];
    for (int i = 0; i < n; i++) {
        max = (max > arr[i]) ? max : arr[i];
    }
    return max;
}
