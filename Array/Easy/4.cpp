// Remove Duplicates in-place from Sorted Array

// Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

// If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.

// Input: arr[]=[1,1,2,2,2,3,3]
// Output: [1,2,3,_,_,_,_]
// Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.
// Input: arr[]=[1,1,1,2,2,3,3,3,3,4,4]
// Output: [1,2,3,4,_,_,_,_,_,_,_]
// Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.

#include<bits/stdc++.h>
using namespace std;

class ArrayRD{
    public :
    void removeduplicates(int *arr, int n){
        int arr1[n];
        arr1[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i ; j++)
            {
                if(arr1[j] == arr[i]){
                    continue;
                } else{
                    arr1[j] = arr[i];
                }
            }
        }
        for (int k = 0; k < n; k++)
        {
            cout << arr1[k];
        }
        cout << endl;
    }
};

int main(){
    ArrayRD rd;
    int arr[] = {1,1,2,2,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    rd.removeduplicates(arr, n);
return 0;
}