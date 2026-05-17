// Count Subarray sum Equals K

// Problem Statement: Given an array of integers and an integer k, return the total number of subarrays whose sum equals k. A subarray is a contiguous non-empty sequence of elements within an array.

// Examples
// Input : N = 4, array[] = {3, 1, 2, 4}, k = 6
// Output: 2
// Explanation: The subarrays that sum up to 6 are [3, 1, 2] and [2, 4].

// Input: N = 3, array[] = {1,2,3}, k = 3
// Output: 2
// Explanation: The subarrays that sum up to 3 are [1, 2], and [3].

#include<bits/stdc++.h>
using namespace std;

void longestsubarray(int a[],int n, int k) {
    int counter = 0;

    for (int i = 0; i < n; i++) {
        int current_sum = 0;
        
        for (int j = i; j < n; j++) {
            current_sum += a[j];
            
            if (current_sum == k) {
                counter++;
            }
        }
    }

    cout << "No of subarrays with sum " << k << " is: " << counter << endl;
}

int main(){
    int arr[] = {3, 1, 2};
    int size = sizeof(arr)/sizeof(int);
    int k = 3;
    longestsubarray(arr,size,k);
return 0;
}