// Longest Consecutive Sequence in an Array

// Problem Statement: Given an array nums of n integers.

// Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.

// Examples
// Example 1:
// Input:
//  nums = [100, 4, 200, 1, 3, 2]  
// Output:
//  4  
// Explanation:
//  The longest sequence of consecutive elements in the array is [1, 2, 3, 4], which has a length of 4. This sequence can be formed regardless of the initial order of the elements in the array.



#include<bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
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

// 1 2 3 4 100 200

void largestSeq(int arr[], int n){
    sort(arr, n);
    int count = 1;
    int maxcount = 1;
    for (int i = 1; i < n; i++)
    {
        if (n == 0) {
        cout << 0 << endl;
        return;
        }

        if(arr[i] == arr[i-1]){
            continue;
        }else if(arr[i-1] == arr[i] - 1){
            count++;
        } else {
            maxcount = max(maxcount, count);
            count = 1;
        }
    }

    maxcount = max(maxcount, count);
    cout << maxcount << endl;

}

int main(){
    // int arr[] = {100, 4, 200, 1, 3, 2};
    int arr[] = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int n = sizeof(arr)/sizeof(int);
    largestSeq(arr, n);
return 0;
}