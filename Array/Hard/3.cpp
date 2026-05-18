// 3 Sum : Find triplets that add up to a zero

// Problem Statement: Given an array of N integers, your task is to find unique triplets that add up to give a sum of zero. In short, you need to return an array of all the unique triplets [arr[a], arr[b], arr[c]] such that i!=j, j!=k, k!=i, and their sum is equal to zero.

// Example 1:
// Input:
//  nums = [-1,0,1,2,-1,-4]
// Output:
//  [[-1,-1,2],[-1,0,1]]
// Explanation:
//  Out of all possible unique triplets possible, [-1,-1,2] and [-1,0,1] satisfy the condition of summing up to zero with i!=j!=k

// -4 -1 -1 0 1 2

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplet(int arr[], int n){
    sort(arr, arr + n);
    
    vector<vector<int>> result;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && arr[i] == arr[i - 1]){
                continue;
            } 

            int l = i + 1;
            int r = n-1;
    
            while(l < r){
                int sum = arr[i] + arr[l] + arr[r];
                if(sum < 0){
                    l++;
                } else if(sum > 0) {
                    r--;
                } else {
                    result.push_back({arr[i], arr[l], arr[r]});
                    l++;
                    r--;

                    while (l < r && arr[l] == arr[l - 1]){
                        l++;
                    } 
                    while (l < r && arr[r] == arr[r + 1]){
                        r--;
                    }
                } 
            }   
        }
        
    
    return result;
}

int main(){
    int arr[] = {-1,0,1,2,-1,-4};
    int n = sizeof(arr)/sizeof(int);
    vector<vector<int>> matrix = findTriplet(arr,n);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}