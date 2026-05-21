// Floor and Ceil in Sorted Array

// Problem Statement: ou're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1]. The floor of x is the largest element in the array which is smaller than or equal to x. The ceiling of x is the smallest element in the array greater than or equal to x

// Examples

// Example 1:
// Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5
// Result: 4 7
// Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

#include<bits/stdc++.h>
using namespace std;

void floorCeilValue(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int ceil = 0;
    int floor = 0;
    while(s <= e){
        int mid = (s + e) / 2;
        if(arr[mid] == target) {
            ceil = arr[mid];
            floor = arr[mid];
            break; 
        }
        else if(arr[mid] >= target){
            ceil = arr[mid];
            e = mid - 1;
        } else {
            floor = arr[mid];
            s = mid + 1;
        }
    }
    cout << "Ceil value is : " << ceil << endl;
    cout << "Floor value is : " << floor << endl;

}



int main(){
    int arr[] = {3, 4, 4, 7, 8, 10};
    int n = sizeof(arr)/sizeof(int);
    int target = 8;
    floorCeilValue(arr, n, target);
return 0;
}