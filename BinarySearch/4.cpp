// Search Insert Position

// Problem Statement: You are given a sorted array arr of distinct values and a target value x. You need to search for the index of the target value in the array.

// Examples
// Example 1:
// Input Format: arr[] = {1,2,4,7}, x = 6
// Result: 3
// Explanation: 6 is not present in the array. So, if we will insert 6 in the 3rd index(0-based indexing), the array will still be sorted. {1,2,4,6,7}.

// Example 2:
// Input Format: arr[] = {1,2,4,7}, x = 2
// Result: 1
// Explanation: 2 is present in the array and so we will return its index i.e. 1.

#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int n, int target){
    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = (s+e)/2;
        if(target > arr[mid]){
            s = mid + 1;
        } else if(target < arr[mid]){
            e = mid - 1;
        } else {
            return mid;
        }
    }

    return s;
}

int main(){
    vector<int> arr = {3,4,6,7,9,12,16,17};
    int n = sizeof(arr)/sizeof(int);
    int target = 10;    
    int index = binarySearch(arr, n, target);
    
    cout << "The target " << target << " belongs at index: " << index << endl;

    
return 0;
}