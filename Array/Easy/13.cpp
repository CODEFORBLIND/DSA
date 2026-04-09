// Longest Subarray with given Sum K(Positives)

// Problem Statement: Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

// Examples
// Example 1:
// Input:
//  nums = [10, 5, 2, 7, 1, 9], k = 15  
// Output:
//  4  
// Explanation:
//  The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4.

// Example 2:
// Input:
//  nums = [-3, 2, 1], k = 6  
// Output:
//  0  
// Explanation:
//  There is no sub-array in the array that sums to 6. Therefore, the output is 0.

#include <iostream>
using namespace std;

int longestsubarray(int arr[], int n, int k){
    int maxlen = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int sum = 0;
            for (int k = i ; k<= j; k++){
                sum +=arr[k];
            }
            if (sum == k){
                maxlen = max(maxlen, j-i+1);
            }
        }
    }
    return maxlen;
}

int main() {
    int arr[] = {10, 5, 2, 7, 1, 9};
    int size = sizeof(arr)/sizeof(int);
    int k = 15;
    cout<< longestsubarray(arr,size,k);
    return 0;
}