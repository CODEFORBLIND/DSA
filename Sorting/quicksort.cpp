#include <iostream>
#include <vector>
using namespace std;

int partition(int arr[], int low, int high) { // arr, 0, 5

    // arr = 10,7,8,9,1,5
    int pivot = arr[high]; // arr[5] = pivot = 5

    int i = low - 1; // i = 0-1 = -1

    for (int j = low; j <= high - 1; j++) { // j = 0 to 4
        if (arr[j] < pivot) { // arr[4] = 1 < 5
            i++; // -1 + 1 = 0
            swap(arr[i], arr[j]); // swap 10 and 1
        }
    }
    // arr = 1, 7, 8, 9, 10, 5

    swap(arr[i + 1], arr[high]);  // 7 and 5 swap
    // arr = 1, 5, 8, 9, 10, 7
    return i + 1; // 1 return
}

void quickSort(int arr[], int low, int high) { //arr,0,5

    if (low < high) { // 0 < 5
    
        int pi = partition(arr, low, high); // arr, 0, 5
        // return hua pi = 1

        quickSort(arr, low, pi - 1); // arr, 0, 0
        quickSort(arr, pi + 1, high); // arr, 2, 5
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(int);
    cout << "Unsorted Array : " ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1); // arr, 0, 5

    cout << "Sorted Array : ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
