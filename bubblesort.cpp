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

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}