// Count the number of subarrays with given xor K

// Problem Statement: Given an array of integers A and an integer B. Find the total number of subarrays having bitwise XOR of all elements equal to k.

// Examples
// Input: A = [4, 2, 2, 6, 4] , k = 6
// Output: 4
// Explanation: The subarrays having XOR of their elements as 6 are  [4, 2], [4, 2, 2, 6, 4], [2, 2, 6], [6]
// Input: A = [5, 6, 7, 8, 9], k = 5
// Output: 2
// Explanation: The subarrays having XOR of their elements as 5 are [5] and [5, 6, 7, 8, 9]

#include <bits/stdc++.h>
using namespace std;

int countSubarraysWithXOR_K(vector<int> &A, int k) {
    int xr = 0;        // Keeps track of the running cumulative XOR (Total Rope)
    int count = 0;     // Stores the total number of valid subarrays found

    // Our History Book: Maps a [Prefix XOR Value] to [How many times it has occurred]
    unordered_map<int, int> visited_prefixes;

    // Base Case: Before we look at any numbers, a prefix XOR of 0 has appeared 1 time.
    // This allows us to catch subarrays that start from the very beginning (index 0).
    visited_prefixes[0] = 1;

    for (int i = 0; i < A.size(); i++) {
        // Step 1: Add the current number to our total running XOR
        xr = xr ^ A[i];

        // Step 2: Calculate the exact prefix we need to cut away to leave behind 'k'
        int target_x = xr ^ k;

        // Step 3: Check our history book to see if 'target_x' has appeared before
        if (visited_prefixes.find(target_x) != visited_prefixes.end()) {
            // If it appeared, add its frequency count to our total answer
            count += visited_prefixes[target_x];
        }

        // Step 4: Record our current prefix XOR into the history book
        visited_prefixes[xr]++;
    }

    return count;
}

int main() {
    vector<int> A = {4, 2, 2, 6, 4};
    int k = 6;
    
    int result = countSubarraysWithXOR_K(A, k);
    cout << "Total number of subarrays with XOR " << k << " is: " << result << endl;
    
    return 0;
}