// Find the number that appears once, and the other numbers twice

// Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

// Examples
// Example 1:
// Input Format: arr[] = {2,2,1}
// Result: 1
// Explanation: In this array, only the element 1 appear once and so it is the answer.


// Example 2:
// Input Format: arr[] = {4,1,2,1,2}
// Result: 4
// Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.



#include<bits/stdc++.h>
using namespace std;
class findsingle{
    public:
    void appearOnce(int *arr, int n){
        map<int, array<int,5>> numbers;
        numbers.insert({2,{4,1,2,1,2}});
        
    }
};
int main(){
    int arr[] = {4,1,2,1,2} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    findsingle fs;
    fs.appearOnce(arr, n);
return 0;
}