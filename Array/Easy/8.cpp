// Linear Search in C

// Problem Statement: Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

// Example 1:
// Input:
//  arr[] = 1 2 3 4 5, num = 3  
// Output:
//  2  `
// Explanation:
//  3 is present at the 2nd index of the array.


#include<bits/stdc++.h>
using namespace std;
class linearSearch{
    public : 
    void linear(int *arr, int n, int num){
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == num){
                cout << i;
            }
        }
        
    }
};
int main(){
    int arr[] = {1, 2, 3, 7, 9, 6};
    int num = 1;
    int n = sizeof(arr)/sizeof(arr[0]);
    linearSearch ls;
    ls.linear(arr, n, num);
return 0;
}