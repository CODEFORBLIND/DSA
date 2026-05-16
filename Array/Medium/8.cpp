// Leaders in an Array

// Problem Statement: 

// Examples
// Example 1:
// Input:
//  arr = [4, 7, 1, 0]  
// Output:
//  7 1 0  
// Explanation:
//  The rightmost element (0) is always a leader.  
// 7 and 1 are greater than the elements to their right, making them leaders as well.


#include<bits/stdc++.h>
using namespace std;

void leaders(int arr[], int n){
    vector<int> leader;
    
    for (int i = 0; i < n; i++)
    {
        int lead = arr[i];
        int flag = 1;
        
        for (int j = i+1; j < n; j++)
        {
            if(arr[j] >= lead){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            leader.push_back(lead);
        }
    }

    for (int i = 0; i < leader.size(); i++)
    {
        cout << leader[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int arr[] = {10, 22, 12, 3, 0, 6};
    int n = sizeof(arr)/sizeof(int);
    leaders(arr,n);
return 0;
}