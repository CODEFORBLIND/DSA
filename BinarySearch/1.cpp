// Binary Search: Explained

// Problem statement: You are given a sorted array of integers and a target, your task is to search for the target in the given array. Assume the given array does not contain any duplicate numbers.

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    while(s <= e){
        int mid = (s+e)/2;
        if(target > arr[mid]){
            s = mid + 1;
        } else if(target < arr[mid]){
            e = mid - 1;
        } else {
            return mid;
        }
    }
    return -1;
    
}

int main(){
    int arr[] = {3,4,6,7,9,12,16,17};
    int n = sizeof(arr)/sizeof(int);
    int target = 9;
    int val = binarySearch(arr, n, target);
    if(val == -1){
        cout << "Element not found!!" << endl;
    } else {
        cout << "Element found at index " << val << endl;
    }
return 0;
}