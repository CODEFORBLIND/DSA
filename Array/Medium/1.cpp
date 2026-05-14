// Two Sum : Check if a pair with given sum exists in Array

// Problem Statement: Given an array of integers arr[] and an integer target.

// 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

// 2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

// Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
// Output : YES
// Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for first variant for second variant output will be : [1,3].

#include<bits/stdc++.h>
using namespace std;
void findPair(int arr[], int n, int target){
    int l = 0;
    int r = n-1;

    while (l < r)
    {
        int sum = arr[l] + arr[r];

        if(sum == target){
            cout << "Yes" << endl;
            cout << l << " " << r << endl;
            return;
        }

        else if(sum < target){
            l++;
        }

        else{
            r--;
        }
    }
    cout << "No" << endl;
    return;
}

int main(){

    int arr[] = {2,5,6,8,11};
    int target = 14;
    int n = sizeof(arr)/sizeof(int);
    findPair(arr, n, target);

return 0;
}