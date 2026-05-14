// Sort an array of 0s, 1s and 2s

// Problem Statement: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.

// Examples
// Input: nums = [1, 0, 2, 1, 0]
// Output: [0, 0, 1, 1, 2]
// Explanation: The nums array in sorted order has 2 zeroes, 2 ones and 1 two

// Input: nums = [0, 0, 1, 1, 1]
// Output: [0, 0, 1, 1, 1]
// Explanation: The nums array in sorted order has 2 zeroes, 3 ones and zero twos.


#include<bits/stdc++.h>
using namespace std;

void dutchSort(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n-1;

    while (mid <= high)
    {
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[high], arr[mid]);
            high--;
        } else {
            mid++;
        }
    }
}

int main(){
    int arr[] = {1, 0, 2, 1, 0};
    int n = sizeof(arr)/sizeof(int);

    cout << "Unsorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    dutchSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}