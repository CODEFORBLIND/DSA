// Nth Root of a Number using Binary Search

// Problem Statement: Given two numbers N and M, find the Nth root of M. The nth root of a number M is defined as a number X when raised to the power N equals M. If the 'nth root is not an integer, return -1.

// Examples
// Input: N = 3, M = 27
// Output: 3
// Explanation: The cube root of 27 is equal to 3.

#include<bits/stdc++.h>
using namespace std;

int nthRoot(int num, int root){
    if (root == 1) {
        return num;
    }
    int s = 1;
    int l = num;
    
    while (s <= l)
    {
        long long ans = 1; // To prevent signed integer overflow
        int mid = s+(l-s)/2;
        for (int i = 1; i <= root; i++)
        {
            ans *= mid;
            if (ans > num){
                break;
            }
        }
        if(ans == num){
            return mid;
        } else if(ans > num){
            l = mid -1;
        } else {
            s = mid + 1;
        }
    }
    return -1;
}

int main(){
    int num = 64;
    int root = 3;
    int ans = nthRoot(num, root);
    if(ans != -1){
        cout << root << "th root of " <<  num << " is "<< ans << endl;
    } else{
        cout << "No integer root found!" << endl;
    }
return 0;
}