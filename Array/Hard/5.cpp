// Length of the longest subarray with zero Sum

// Problem Statement: Given an array containing both positive and negative integers, we have to find the length of the longest subarray with the sum of all elements equal to zero.

// Examples
// Example 1:
// Input:
//  N = 6, array[] = {9, -3, 3, -1, 6, -5}  
// Result:
//  5  
// Explanation:
//  The following subarrays sum to zero:
// - {-3, 3}
// - {-1, 6, -5}
// - {-3, 3, -1, 6, -5}
// The length of the longest subarray with sum zero is 5.


#include<bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[], int n, int k){
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        int curr_sum = 0;
        for (int j = i; j < n; j++)
        {
            curr_sum += arr[j];

            if(curr_sum == k){
                max_len = max(max_len, j-i+1);
            }
        }
    }
    return max_len;
}

int main(){
    int arr[] = {6, -2, 2, -8, 1, 7, 4, -10};
    int size = sizeof(arr)/sizeof(int);
    int k = 0;
    cout << longestSubarray(arr,size,k);
return 0;
}