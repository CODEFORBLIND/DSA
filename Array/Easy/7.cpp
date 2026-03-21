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
    int counter = 0;
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
                counter++;
            }
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if(i < j){
                arr[i] = dummyArr[i];
            }
            else {
                arr[i] = 0;
            }
        }
    }
    void zerosInBeg(int *arr, int n){
        // Shift all the zeroes in the beginning
        int dummyarr[n];
        while (counter > 0)
            {
                int m = 1;
                dummyarr[0] = arr[n-1];
                for (int i = 0; i < n-1; i++) 
                {
                    dummyarr[m] = arr[i];
                    m++;
                    
                }

                for (int i = 0; i < n; i++)
                {
                    cout << dummyarr[i] << " ";
                    arr[i] = dummyarr[i];
                }
                counter--;
                cout << endl;
            }
    }
};

int main(){
    int arr[] = {1, 0, 3, 0, 0, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    cout << "Shifting the zeroes in the end" << endl;
    endArray ea;
    ea.zeroesToEnd(arr,n);
    
    cout << "Modified Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    cout << "Shifting the zeroes in the beginning" << endl;
    ea.zerosInBeg(arr,n);
return 0;
}