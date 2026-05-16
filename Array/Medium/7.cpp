// Rearrange Array Elements by Sign

// Problem Statement: There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

// Examples
// Example 1:
// Input:
// arr[] = {1,2,-4,-5}, N = 4
// Output:
// 1 -4 2 -5
// Explanation: 
// Positive elements = 1,2
// Negative elements = -4,-5
// To maintain relative ordering, 1 must occur before 2, and -4 must occur before -5.

#include<bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
    int pos[n/2];
    int neg[n/2];
    int j = -1;
    int k = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > 0){
            j++;
            pos[j] = arr[i];
        } else {
            k++;
            neg[k] = arr[i];
        }
    }

    for (int i = 0; i < n/2; i++)
    {
        cout << pos[i] << " " << neg[i] << " ";
    }
    cout << endl;

}

int main(){
    int arr[] = {1,2,-4,-5};
    int n = sizeof(arr)/sizeof(int);
    rearrange(arr,n);
return 0;
}