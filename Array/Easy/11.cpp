// Count Maximum Consecutive One's in the array

// Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.

// Example 1:
// Input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3
// Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

// Example 2:
// Input: prices = {1, 0, 1, 1, 0, 1} 
// Output: 2
// Explanation: There are two consecutive 1's in the array. 

#include<bits/stdc++.h>
using namespace std;
class ConsecOne{
    public:
    void maxConOne(int *arr, int n){
        int counter = 0;
        int maxCount = 0;
        for (int i = 0; i < n; i++)
        {
            while (arr[i] != 0)
            {
                counter++;
                i++;
                cout << counter << " " << endl;
            }
            maxCount = counter;
            cout << "Max Count is : " << maxCount << " " << endl;
            counter = 0;
        }
        cout << "Max Count is : " << maxCount << endl;
    }
};
int main(){
    ConsecOne co;
    int arr[] = {1, 1, 0, 1, 1, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    co.maxConOne(arr, n);
return 0;
}