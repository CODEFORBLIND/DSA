// Kadane's Algorithm : Maximum Subarray Sum in an Array

// Problem Statement: Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.

// A subarray is a contiguous non-empty sequence of elements within an array.

// Examples
// Example 1:
// Input:
//  nums = [2, 3, 5, -2, 7, -4]  
// Output:
//  15  
// Explanation:
//  The subarray from index 0 to index 4 has the largest sum = 15, which is the maximum sum of any contiguous subarray.



#include<bits/stdc++.h>
using namespace std;

// Brute force
void largestSum(int arr[], int n){
    int currsum = 0;
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currsum += arr[j];
            res = max(res, currsum);

        }
        currsum = 0;
    }

    cout << "Maximum Sum is: " << res << endl;

    // Printing the subarray
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if(sum == res){
                cout << i << "," << j << endl;
                for (int k = i; k <= j; k++)
                {
                    cout << arr[k] << " ";
                }
                cout << endl;
                
                return;
            }
        }
        sum = 0;
    }
}

// Kadane's Algorithm   
void kadaneAlgo(int arr[], int n){
    int maxtillNow = arr[0];
    int maxOfAll = arr[0];

    for (int i = 1; i < n; i++)
    {
        maxtillNow = max(arr[i], maxtillNow + arr[i]);

        maxOfAll = max(maxtillNow, maxOfAll);
    }
    
    cout << "Maximum sum is: " << maxOfAll << endl;
}

int main(){
    int arr[] = {2, 3, 5, -2, 7, -4};
    int n = sizeof(arr)/sizeof(int);
    largestSum(arr, n);
    // kadaneAlgo(arr, n);
return 0;
}