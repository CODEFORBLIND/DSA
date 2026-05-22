// Search Single Element in a sorted array

// Problem Statement: Given an array of N integers. Every number in the array except one appears twice. Find the single number in the array.

// Examples
// Input : arr[] = {1,1,2,2,3,3,4,5,5,6,6}
// Output: 4
// Explanation: Only the number 4 appears once in the array.

// Input: arr[] = {1,1,3,5,5}
// Output : 3
// Explanation: Only the number 3 appears once in the array.

#include<bits/stdc++.h>
using namespace std;

int singleElem(int arr[], int n){
    if(n == 1){
        return arr[0];
    }
    if(arr[0] != arr[1]){
        return arr[0];
    }
    if(arr[n-1] != arr[n-2]){
        return arr[n-1];
    }

    int s = 1;
    int e = n-2;

    while(s <= e){
        int mid = (s + e)/ 2;

        if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]){
            return arr[mid];
        }

        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1])){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int n = sizeof(arr)/sizeof(int);
    int ans = singleElem(arr, n);
    cout << "The number that appears once in the array: " << ans << endl;
return 0;
}