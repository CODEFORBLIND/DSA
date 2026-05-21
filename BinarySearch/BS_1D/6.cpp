// Last occurrence in a sorted array

// Problem Statement: Given a sorted array of N integers, write a program to find the index of the last occurrence of the target key. If the target is not found then return -1. Note: Consider 0 based indexing

// Examples
// Example 1:
// Input:
//  N = 7, target = 13, array[] = {3, 4, 13, 13, 13, 20, 40}  
// Output:
//  2  
// Explanation:
//  The target value 13 appears for the first time at index number 2 in the array.


#include<bits/stdc++.h>
using namespace std;

void firstLastOcc(int arr[], int n, int target){
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target){
            index = i;
            cout << "Target first occurence found at index: " << index << endl;
            break;
        }
    }
    
    for (int i = n-1; i >= 0; i--)
    {
        if(arr[i] == target){
            index = i;
            cout << "Target last occurence found at index: " << index << endl;
            break;
        }
    }
    if(index == -1){
        cout << "Target not found!!" << endl;
    }
    
}

int main(){
    int arr[] = {3, 4, 13, 13, 13, 20, 40};
    int n = sizeof(arr)/sizeof(int);
    int target = 13;
    firstLastOcc(arr, n, target);
return 0;
}