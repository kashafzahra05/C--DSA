#include<iostream>
using namespace std;
int sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Not sorted
        }
    }
    return 1; // Sorted
}
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (sorted(arr, n))
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";
    return 0;
}