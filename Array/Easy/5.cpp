// Left Rotate the Array by One

// Problem Statement: Given an integer array nums, rotate the array to the left by one.

// Note: There is no need to return anything, just modify the given array.

// Example 1:
// Input:
//  nums = [1, 2, 3, 4, 5]  
// Output:
//  [2, 3, 4, 5, 1]  
// Explanation:
//  Initially, nums = [1, 2, 3, 4, 5]  
// Rotating once to the left results in nums = [2, 3, 4, 5, 1].


// Example 2:
// Input:
//  nums = [1, 2, 3, 4, 5]  
// Output:
//  [5, 1, 2, 3, 4]  
// Explanation:
//  Initially, nums = [1, 2, 3, 4, 5]  
// Rotating once to the left results in nums = [5, 1, 2, 3, 4] .


#include<bits/stdc++.h>
using namespace std;


class arrayrl{
    public:
    void rotateleft(int *arr, int n){
        // Shift the first element to last
        int dummyarr[n];
        int j = 0;
        for (int i = 1; i < n; i++)
        {
            dummyarr[j] = arr[i];
            j++;
        }
        dummyarr[j] = arr[0];
        for (int i = 0; i < n; i++)
        {
            cout << dummyarr[i];
        }
    }

    void rotateright(int *arr, int n){
        // Shift the last elem to first position
        int dummyarr[n];
        int k = 1;
        dummyarr[0] = arr[n-1];
        for (int i = 0; i < n-1; i++) 
        {
            dummyarr[k] = arr[i];
            k++;
            
        }
        for (int i = 0; i < n; i++)
        {
            cout << dummyarr[i] << " ";
        }
    }
};

int main(){
    arrayrl rl;
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    // rl.rotateleft(arr,n);
    rl.rotateright(arr,n);
return 0;
}