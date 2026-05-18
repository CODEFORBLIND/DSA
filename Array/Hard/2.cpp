// Majority Elements( > N/3 times) | Find the elements that appears more than N/3 times in the array

// Problem Statement: Given an integer array nums of size n. Return all elements which appear more than n/3 times in the array. The output can be returned in any order.

// Examples
// Example 1:
// Input:
//  nums = [1, 2, 1, 1, 3, 2]  
// Output:
//  [1]  
// Explanation:
//  Here, n / 3 = 6 / 3 = 2.  
// Therefore, the elements appearing 3 or more times are: [1].

#include<bits/stdc++.h>
using namespace std;

void majorityelem(int arr[], int n){
    int candid1 = -1;
    int candid2= -1;
    int votes1 = 0;
    int votes2 = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == candid1){
                votes1++;
        } else if(arr[i] == candid2){
                votes2++;
        } else if(votes1 == 0){
            candid1 = arr[i];
            votes1 = 1;
        } else if(votes2 == 0){
            candid2 = arr[i];
            votes2 = 1;
        } else {
                votes1--;
                votes2--;
            }
    }

    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == candid1){
            count1++;
        } else if(arr[i] == candid2){
            count2++;
        }
    }
    vector<int> final;
    if(count1 > n/3){
        final.push_back(candid1);
    } 
    if(count2 > n/3){
        final.push_back(candid2);
    }

    if(!final.empty()){
        cout << "Majority Elements are: ";
        for(int x: final){
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << "No majority element found!"<< endl;
    }
    
}

void majorelemUsingMap(int arr[], int n){
    unordered_map<int, int> counts;

    for (int i = 0; i < n; i++)
    {
        counts[arr[i]]++;
    }

    vector<int> result;
    int minReq = n/3;

    for(auto x: counts){
        if(x.second > minReq){
            result.push_back(x.first);
        }
    }

    if(!result.empty()){
        cout << "Majority Elements are: ";
        for(int x: result){
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << "No majority element found!"<< endl;
    }
    
}


int main(){
    int arr[] = {1, 2, 1, 1, 3, 2, 2};
    int n = sizeof(arr)/sizeof(int);
    // majorityelem(arr, n);
    majorelemUsingMap(arr, n);
return 0;
}