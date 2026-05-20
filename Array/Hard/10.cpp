// Count inversions in an array

// Problem Statement: Given an array of N integers, count the inversion of the array (using merge-sort).

// Inversion of an array: for all i & j < size of array, if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].

// Examples
// Example 1:
// Input Format: N = 5, array[] = {1,2,3,4,5}
// Result: 0
// Explanation: we have a sorted array and the sorted array has 0 inversions as for i < j you will never find a pair such that A[j] < A[i]. More clear example: 2 has index 1 and 5 has index 4 now 1 < 5 but 2 < 5 so this is not an inversion.

#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int m, int s, int e){
    int counter = 0; // To count the number of inversions
    int i = s;
    int j = m+1;
    int r = 0;
    int temp[e - s + 1];

    while(i <= m && j <= e){
        if(arr[i] < arr[j]){
            temp[r] = arr[i];
            i++;
            r++;
        } else { 
            temp[r] = arr[j];
            counter += (m- i + 1);
            j++;
            r++;
        }
    }

    while (i <= m)
    {
        temp[r] = arr[i];
        i++;
        r++;
    }

    while (j <= e)
    {
        temp[r] = arr[j];
        j++;
        r++;
    }

    for (int i = 0; i < r; i++)
    {
        arr[s+i] = temp[i];
    }
    return counter;
}

int divide(int arr[], int s, int e){
    int counter = 0;
    int m = (s + e)/2;

    if(s < e){
        counter += divide(arr, s, m);
        counter += divide(arr, m+1, e);
        counter += merge(arr, m, s, e);
    }
    return counter;
}

int countInversion(int arr[], int n){
    return divide(arr, 0, n-1);
}

int main(){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(int);
    int total = countInversion(arr, n);
    cout << "Total Inversions : " << total << endl;
return 0;
}