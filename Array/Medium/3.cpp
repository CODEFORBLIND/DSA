// Find the Majority Element that occurs more than N/2 times

// Problem Statement: Given an integer array nums of size n, return the majority element of the array.

// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

// Examples
// Example 1:
// Input:
//  nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]  
// Output:
//  7  
// Explanation:
//  The number 7 appears 5 times in the 9-sized array, making it the most frequent element.

// BOYER-MOORE-MAJORITY-VOTING-ALGORITHM

#include<bits/stdc++.h>
using namespace std;

void majorityElem(int arr[], int n){
    int candid = -1;
    int votes = 0;
    for (int i = 0; i < n; i++)
    {
        if(votes == 0){
            candid = arr[i];
            votes = 1;
        } else if(arr[i] == candid){
            votes++;
        } else {
            votes--;
        }
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == candid){
            count ++;
        }
    }
    
    if(count > n/2){
        cout << "Majority element found: " << candid << " With a count of " << count << endl;
    } else {
        cout << "No Majority element found!" << endl;
    }
    
}

int main(){
    int arr[] = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int n = sizeof(arr)/sizeof(int);
    majorityElem(arr, n);
return 0;
}