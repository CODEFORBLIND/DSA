// Union of Two Sorted Arrays

// Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

// The union of two arrays can be defined as the common and distinct elements in the two arrays.

// NOTE: Elements in the union should be in ascending order.

// Examples:

// Input:n = 5,m = 5 arr1[] = {1,2,3,4,5}  arr2[] = {2,3,4,4,5}
// Output: {1,2,3,4,5}
// Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
// Distnict Elements in arr1 are : 1
// Distnict Elemennts in arr2 are : No distinct elements.
// Union of arr1 and arr2 is {1,2,3,4,5}

#include<bits/stdc++.h>
using namespace std;

class UnionArray{
    public : 
    void unionArr(int *arr1, int *arr2, int n, int m){
        set<int> s1;
        for (int i = 0; i < n; i++)
        {
            s1.insert(arr1[i]);
        }
        for (int j = 0; j < m; j++)
        {
            s1.insert(arr2[j]);
        }
        
        for(int it: s1){
            cout << it << " ";
        }
        cout << endl;
    }
};

int main(){
    // int arr1[] = {1,2,3,4,5};
    // int arr2[] = {2,3,4,4,5};

    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {2,3,4,4,5,11,12};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    UnionArray ua;
    ua.unionArr(arr1, arr2, n, m);
return 0;
}