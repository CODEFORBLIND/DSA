// Implement Upper Bound

// Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the upper bound of x.

// What is Upper Bound?
// The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater than the given key i.e. x.

// The upper bound is the smallest index, ind, where arr[ind] > x.

// Examples
// Example 1:
// Input Format: N = 4, arr[] = {1,2,2,3}, x = 2
// Result: 3
// Explanation: Index 3 is the smallest index such that arr[3] > x.

#include<bits/stdc++.h>
using namespace std;

int upperBound(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int ans = n;
    while(s <= e){
        int mid = (s+e)/2;
        if(target < arr[mid]){
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {3,5,8,9,15,19};
    int n = sizeof(arr)/sizeof(int);
    int target = 9;
    int lb = upperBound(arr, n, target);
    cout << "upperBound is: "<< lb << endl;

return 0;
}