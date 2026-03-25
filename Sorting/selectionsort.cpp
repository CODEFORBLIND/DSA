// Selection Sort Algorithm
// Example 1:
// Input: N = 6, array[] = {13,46,24,52,20,9}
// Output: 9,13,20,24,46,52
// Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52


// Time Complexity: O(n^2) ,as there are two nested loops:

// One loop to select an element of Array one by one = O(n)
// Another loop to compare that element with every other Array element = O(n)
// Therefore overall complexity = O(n) * O(n) = O(n*n) = O(n^2)

// Auxiliary Space: O(1) as the only extra memory used is for temporary variables.

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    int min_idx;
    for(int i = 0; i<n; i++){
        min_idx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}