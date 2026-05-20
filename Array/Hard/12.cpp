// Maximum Product Subarray in an Array

// Problem Statement: Given an array that contains both negative and positive integers, find the maximum product subarray.

// Examples
// Input: Nums = [1,2,3,4,5,0]
// Output: 120
// Explanation: 
// In the given array, 1×2×3×4×5 gives maximum product value.

#include<bits/stdc++.h>
using namespace std;

void maxProductSubarr(int arr[], int n){
    // Traversing from left to right
    int prod = arr[0];
    int max_prod = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i] == 0){
            prod = 1;
            max_prod = max(max_prod, prod);
        } else {
            prod = arr[i] * prod;
            max_prod = max(max_prod, prod);
        }
    }
    

    // Traversing from right to left
    int prod1 = arr[n-1];
    int max_prod1 = 1;
    for (int i = n-2; i >= 0; i--)
    {
        if(arr[i] == 0){
            prod = 1;
            max_prod1 = max(max_prod1, prod);
        } else {
            prod = arr[i] * prod;
            max_prod1 = max(max_prod1, prod);
        }
    }

    int realMax = max(max_prod, max_prod1);
    cout << "Maximum Product: " << realMax << endl;
}

int main(){
    int arr[] = {1,2,-3,0,-4,-5};
    int n = sizeof(arr)/sizeof(int);
    maxProductSubarr(arr, n);
return 0;
}