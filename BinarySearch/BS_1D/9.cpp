// Search Element in Rotated Sorted Array II

// There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).

// Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become [4,5,6,6,7,0,1,2,4,4].

// Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums.

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
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target){
            cout << "True" << endl;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        cout << "False" << endl;
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