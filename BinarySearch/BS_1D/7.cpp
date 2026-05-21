// Count Occurrences in Sorted Array

// Problem Statement: You are given a sorted array containing N integers and a number X, you have to find the occurrences of X in the given array.

// Examples
// Example 1:
// Input:
//  N = 7,  X = 3 , array[] = {2, 2 , 3 , 3 , 3 , 3 , 4}
// Output
// : 4
// Explanation:
//  3 is occurring 4 times in 
// the given array so it is our answer.

#include<bits/stdc++.h>
using namespace std;

void findOccurences(int arr[], int n, int target){
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == target){
            counter++;
        }
    }
    cout << "No of occurences are: " << counter << endl;

}

int main(){
    int arr[] = {2 , 2 , 3 , 3 , 3 , 3 , 4};
    int n = sizeof(arr)/sizeof(int);
    int target = 2;
    findOccurences(arr, n, target);
return 0;
}