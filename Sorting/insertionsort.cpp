// Insertion Sort Algorithm
// Example 1:
// Input:
//   nums = [7, 4, 1, 5, 3]  
// Output:
//   [1, 3, 4, 5, 7]  
// Explanation:
//   The array is sorted in non-decreasing order: 1 ≤ 3 ≤ 4 ≤ 5 ≤ 7.

// Complexity Analysis of Insertion Sort
// Time Complexity : 

// Best case: O(n), If the list is already sorted, where n is the number of elements in the list.
// Average case: O(n2), If the list is randomly ordered
// Worst case: O(n2), If the list is in reverse order
// Space Complexity :

// Auxiliary Space: O(1), Insertion sort requires O(1) additional space, making it a space-efficient sorting algorithm.


#include<bits/stdc++.h>
using namespace std;

void insertionSort(int n, int arr[]){
    for (int i = 0; i < n-1; i++)
    {
        int key = arr[i+1];
        // cout <<"Key is "<< key << endl;
        for (int j = 0; j <= i; j++)
        {
            if(arr[j] > key){
                // cout << arr[j] << " " << arr[j+1] << endl;
                swap(arr[j], arr[i+1]);
                // cout << arr[j] << " " << arr[j+1] << endl;
            }
        }
    }
    
}

int main(){
    int n;
    cout << "Enter the number of elements you want in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    insertionSort(n, arr);


    cout << "Sorted array: ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
return 0;
}