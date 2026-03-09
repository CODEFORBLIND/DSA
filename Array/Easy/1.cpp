// Find the Largest element in an array
// Problem Statement: Given an array, we have to find the largest element in the array.
// Example 1:
// Input:
//  arr[] = {2, 5, 1, 3, 0}  
// Output:
//  5  
// Explanation:

// 5 is the largest element in the array.

#include<bits/stdc++.h>
using namespace std;

class findMax{
    public:
    void findmax(int* arr1, int n){
        int max = arr1[0];
        for(int i=0; i<n; i++){
            if(arr1[i] > max){
                max = arr1[i];
            }
        }
        cout << "Maximum is: " << max << endl;
}

};

int main(){
    // int arr[] = {2, 5, 1, 3, 0};
    int arr[] = {8, 10, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMax fm;
    fm.findmax(arr, size);
return 0;
}