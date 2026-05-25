// Finding Sqrt of a number using Binary Search


// Problem Statement: You are given a positive integer n. Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of sqrt(n).

// Examples
// Input: N = 36
// Output: 6
// Explanation: Square root of 36 is 6. 
// Input: N = 28
// Output: 5
// Explanation: Square root of 28 is approximately 5.292. So, the floor value will be 5. 

#include<bits/stdc++.h>
using namespace std;

void findSqrt(int n){
    if (n < 2) {
        return n;
    }
    int s = 1;
    int l = n/2;
    int candid = 0;

    while (s <= l)
    {
        int mid = (s+l)/2;
        if((mid * mid) <= n){
            candid = mid;
            s = mid + 1;
        } else {
            l = mid - 1;
        }
    }
    cout << "Square root is: " << candid << endl;  
}

int main(){
    int n = 36;
    findSqrt(n);
return 0;
}