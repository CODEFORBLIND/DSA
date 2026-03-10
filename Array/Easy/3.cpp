// Check if an Array is Sorted

// Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: True.
// Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

// Example 2:
// Input: N = 5, array[] = {5,4,6,7,8}
// Output: False.
// Explanation: The given array is Not sorted i.e Every element in the array is not smaller than or equal to its next values, So the answer is False.
// Here element 5 is not smaller than or equal to its future elements.


#include<bits/stdc++.h>
using namespace std;

class sortedArray{
    public:
    void chksort(int *arr, int n){
        if (n == 0 || n == 1) {
            cout << "Array is sorted as it has only 1 or 0 element" << endl;
            return;
        }
        int i = 0;
        while(i < n-1){
            if(arr[i] < arr[i+1]){
                i++;
            } else{
                break;
            }
        }
        if(i == n-1){
            cout << "Array is sorted in Ascending Order" << endl;
            return;
        }

        i = 0;
        while(i < n-1){
            if(arr[i] > arr[i+1]){
                i++;
            } else{
                break;
            }
        }
        if(i == n-1){
            cout << "Array is sorted in Desceding Order" << endl;
            return;
        }

        cout << "False (Array is not sorted)" << endl;
    }
};
int main(){
    int arr[] = {1,2,3,4,5};
    int arr1[] = {2,4,5,1};
    int arr2[] = {5,4,3,2,1};
    int n, n1, n2;
    n = sizeof(arr)/ sizeof(arr[0]);
    n1= sizeof(arr1)/ sizeof(arr1[0]);
    n2 = sizeof(arr2)/ sizeof(arr2[0]);
    sortedArray sa;
    cout << "Checking arr: " << endl;
    sa.chksort(arr, n);
    cout << "Checking arr1: " << endl;
    sa.chksort(arr1, n1);
    cout << "Checking arr2: " << endl;
    sa.chksort(arr2, n2);
return 0;
}