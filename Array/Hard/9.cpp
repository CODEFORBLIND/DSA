// Find the repeating and missing numbers

// Problem Statement: Given an integer array nums of size n containing values from [1, n] and each value appears exactly once in the array, except for A, which appears twice and B which is missing.
// Return the values A and B, as an array of size 2, where A appears in the 0-th index and B in the 1st index.

// Note: You are not allowed to modify the original array.

// Examples
// Example 1:
// Input:
//  nums = [3, 5, 4, 1, 1]  
// Output:
//  [1, 2]  
// Explanation:
//  1 appears twice in the array, and 2 is missing from the array. So the output is [1, 2].

// 3, 5, 4, 1, 1
// 1 1 3 4 5

#include<bits/stdc++.h>
using namespace std;

void repeatAndMissing(vector<int> arr, int n){
    vector<int> temp;
    unordered_map<int, int> freq;
    for(int num : arr){
        freq[num]++;
    }
    
    
    for (auto pair : freq) {
        // cout << "Element " << pair.first << " appears " << pair.second << " times." << endl;
        if(pair.second == 2){
            temp.push_back(pair.first);
        }
    }

    // Missing Number
    set<int> uniqNum(arr.begin(), arr.end());
    int sum = 0;
    int largestelem = *uniqNum.rbegin();
    int actualSum = ((largestelem) * (largestelem + 1)) / 2;
    for(int num : uniqNum){
        sum += num;
    }
    int missingNum = actualSum - sum;

    temp.push_back(missingNum);

    for(int nums : temp){
        cout << nums << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1, 2, 3, 6, 7, 5, 7};
    int n = sizeof(arr)/sizeof(int);
    repeatAndMissing(arr, n);
return 0;
}