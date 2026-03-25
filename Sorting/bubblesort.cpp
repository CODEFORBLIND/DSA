// Bubble Sort Algorithm

// Example 1:
// Input: N = 5, array[] = {5,4,3,2,1}
// Output: 1,2,3,4,5
// Explanation: After sorting we get 1,2,3,4,5


// Complexity Analysis of Bubble Sort:
// Time Complexity: O(n^2)
// Auxiliary Space: O(1)

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

// optimized version
void bubblesortOptimized(int arr1[], int n){
    int swapDone = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr1[i] > arr1[j]){
                swap(arr1[i], arr1[j]);
                swapDone++;
            }
        }
        if(swapDone == 0){
            break;
        }
    }
    cout << "Number of swaps done :" << swapDone << endl;
}


int main(){
    int n;
    cin >> n;
    // int arr[n];
    int arr1[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // bubbleSort(arr, n);
    bubblesortOptimized(arr1, n);

    cout << "Sorted array: ";
    for(int i = 0; i<n; i++){
        cout << arr1[i] << " ";
    }
    
    return 0;
}