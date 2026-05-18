// 4 Sum | Find Quads that add up to a target value

// Problem Statement: Given an array of N integers, your task is to find unique quads that add up to give a target value. In short, you need to return an array of all the unique quadruplets [arr[a], arr[b], arr[c], arr[d]] such that their sum is equal to a given target.

// Note: a, b, c and d are also distinct and lies between 0 to n-1 (both inclusive).
// Examples
// Example 1:
// Input Format:arr[] = [1,0,-1,0,-2,2], target = 0
// Result: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Explanation:We have to find unique quadruplets from the array such that the sum of those elements is equal to the target sum given that is 0. The result obtained is such that the sum of the quadruplets yields 0.


#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findQuads(int arr[], int n, int target){
    sort(arr, arr + n);
    
    vector<vector<int>> result;
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && arr[i] == arr[i - 1]){
                continue;
            } 

            for (int j = i+1; j < n; j++)
            {
                if (j > i+1 && arr[j] == arr[j - 1]){
                continue;
                }
                int l = j + 1;
                int r = n-1;
    
                while(l < r) {
                    int sum = arr[i] + arr[j] + arr[l] + arr[r];
                    if(sum < target){
                        l++;
                    } else if(sum > target) {
                        r--;
                    } else {
                        result.push_back({arr[i], arr[j], arr[l], arr[r]});
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
        }
        
    
    return result;
}

int main(){
    int arr[] = {4,3,3,4,4,2,1,2,1,1};
    int n = sizeof(arr)/sizeof(int);
    int target = 9;
    vector<vector<int>> matrix = findQuads(arr,n, target);
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