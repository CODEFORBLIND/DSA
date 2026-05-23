// Peak element in Array

// Problem Statement: Given an array of length N, peak element is defined as the element greater than both of its neighbors. Formally, if arr[i] is the peak element, arr[i - 1] < arr[i] and arr[i + 1] < arr[i]. Find the index(0-based) of a peak element in the array. If there are multiple peak numbers, return the index of any peak number.

// Examples
// Input: arr[] = {1,2,3,4,5,6,7,8,5,1}
// Output: 7
// Explanation: There is only 1 peak element, 8,  that is at index 7.

#include<bits/stdc++.h>
using namespace std;

void findPeakElem(int arr[], int n){
    int l = 0;
    int h = n-1;

    while (l < h)
    {
        int mid = (l + h)/2;

        if(arr[mid] > arr[mid+1]){
            h = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << "Peak Element present at index: " << l << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,5,1};
    int n = sizeof(arr)/sizeof(int);
    findPeakElem(arr, n);
return 0;
}