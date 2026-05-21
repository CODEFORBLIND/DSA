// Search Element in a Rotated Sorted Array

// There is an integer array nums sorted in ascending order (with distinct values).

// Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

// Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

// Examples
// Input:nums = [0,1,2,4,5,6,7], k = 0, left_rotate = 3
// Output :4
// Explanation : Here, the target is 0. We can see that 0 is present in the given rotated sorted array, nums. Thus, we get output as 4, which is the index at which 0 is present in the array.

#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int left_rotate, int target){
    int counter = 1;
    int temp[n];
    while (counter <= left_rotate)
    {
        int j = 0;
        for (int i = 1; i < n; i++)
        {
            temp[j] = arr[i];
            j++;
        }
        temp[j] = arr[0];
        cout << "Array after left rotation =  " << counter << endl;
        for (int i = 0; i < n; i++)
        {
            cout << temp[i] << " ";
            arr[i] = temp[i];
        }
        cout << endl;
        counter++;
    }
    // returning the index of the target
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target){
            cout << "New Index of the target is: " << i << endl;
            break;
        }
    }
    
}

int main(){
    int arr[] = {0,1,2,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int left_rotate = 3;
    int target = 0;
    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
            arr[i] = arr[i];
        }
        cout << endl;
    rotateArray(arr, n, left_rotate, target);
return 0;
}