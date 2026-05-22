// Find out how many times the array has been rotated

// Problem Statement: Given an integer array arr of size N, sorted in ascending order (with distinct values). Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated.

// Pre-requisites: Find minimum in Rotated Sorted Array,  Search in Rotated Sorted Array II & Binary Search algorithm

// Examples
// Input : arr = [4,5,6,7,0,1,2,3]
// Result: 4
// Explanation: The original array should be [0,1,2,3,4,5,6,7]. So, we can notice that the array has been rotated 4 times.

// Input : arr = [3,4,5,1,2]
// Output : 3
// Explanation: The original array should be [1,2,3,4,5]. So, we can notice that the array has been rotated 3 times.


#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int left_rotate){
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
}

void findMin(int arr[], int n, int left_rotate){
    rotateArray(arr, n, left_rotate);
    int s = 0;
    int e = n-1;
    while (s < e)
    {
        int mid = (s+e)/2;
        if(arr[mid] > arr[e]){
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    cout <<"No of rotations: " << (n - s) << endl;
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    int left_rotate = 3;
    findMin(arr, n, left_rotate);
return 0;
}