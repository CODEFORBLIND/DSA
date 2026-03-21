// Move all Zeros to the end of the array

// Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to the end of the array and move non-negative integers to the front by maintaining their order.

// Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
// Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
// Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
// Input : 1,2,0,1,0,4,0
// Output: 1,2,1,4,0,0,0
// Explanation : All the zeros are moved to the end and non-negative integers are moved to front by maintaining order

#include<bits/stdc++.h>
using namespace std;

class endArray{
    public:
    void zeroesToEnd(int *arr, int n){
        int dummyArr[n];
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 0){
                continue;
            } else{
                dummyArr[j] = arr[i]; 
                j++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(i < j){
                cout << dummyArr[i] << " ";
            } else { 
                cout << "0" << " ";
            }
        }
    }
};

int main(){
    int arr[] = {1, 0, 3, 0, 0, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    endArray ea;
    ea.zeroesToEnd(arr,n);
    
return 0;
}