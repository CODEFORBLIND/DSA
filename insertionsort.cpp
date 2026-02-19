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

// void insertionSort(int n, int arr[]){
//     vector<int> arr1(n);
//     arr1[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if(arr[1] > arr1[0]){
//             arr1[1] = arr[1];
//         }
//         else{
//             arr1[0] = arr[1];
//             arr1[1] = arr[0];
//         }
//     }

//     cout << "Sorted array: ";
//     for(int i = 0; i<n; i++){
//         cout << arr1[i] << " ";
//     }
// }

int main(){
    int n;
    cout << "Enter the number of elements you want in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // insertionSort(n, arr);


    // cout << "Sorted array: ";
    // for(int i = 0; i<n; i++){
    //     cout << arr1[i] << " ";
    // }
return 0;
}