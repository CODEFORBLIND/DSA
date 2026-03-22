// Find the Missing Number
// Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.
// Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
// Output: 6
// Explanation: All the numbers from 1 to 8 are present except 6.

#include<bits/stdc++.h>
using namespace std;
class missingNumber{
    public:
    int sum = 0;
    void missNum(int *arr, int n){
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << "Sum is :" << sum << endl;
    }
    void sumofNum(int n){
        int size = n+1;
        int actSum = (size* (size+1)) / 2;
        cout << "Actual Sum: " << actSum << endl;
        int num = actSum - sum;
        cout << "Number is: " << num << endl;
    }
};  
int main(){
    missingNumber mn;
    // int arr[] = {1, 2, 3, 5};
    int arr[] = {8, 2, 4, 5, 3, 7, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "N is: " << n << endl;
    mn.missNum(arr, n);
    mn.sumofNum(n);
return 0;
}