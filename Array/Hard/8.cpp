// Merge two Sorted Arrays Without Extra Space

// Problem Statement: Given two sorted integer arrays nums1 and nums2, merge both the arrays into a single array sorted in non-decreasing order.
// The final sorted array should be stored inside the array nums1 and it should be done in-place.
// Array nums1 has a length of m + n, where the first m elements denote the elements of nums1 and rest are 0s whereas nums2 has a length of n.

// Examples
// Input : nums1 = [-5, -2, 4, 5, 0, 0, 0], nums2 = [-3, 1, 8]
// Output : [-5, -3, -2, 1, 4, 5, 8]
// Explanation : The merged array is: [-5, -3, -2, 1, 4, 5, 8], where [-5, -2, 4, 5] are from nums1 and [-3, 1, 8] are from nums2

// Input : nums1 = [0, 2, 7, 8, 0, 0, 0], nums2 = [-7, -3, -1]
// Output :  [-7, -3, -1, 0, 2, 7, 8]
// Explanation :  The merged array is: [-7, -3, -1, 0, 2, 7, 8], where [0, 2, 7, 8] are from nums1 and [-7, -3, -1] are from nums2

#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int num1[], int num2[], int n1, int n2){
    int counter = 0;
    int j = n1-1;
    while (counter < n2)
    {
        num1[j] = num2[counter];
        counter++;
        j--;
    }
    
    sort(num1, num1+n1);
    
    for (int i = 0; i < n1; i++)
    {
        cout << num1[i] << " ";
    }
    cout << endl;
}

int main(){
    int num1[] = {0, 2, 7, 8, 0, 0, 0};
    int n1 = sizeof(num1)/sizeof(int);
    int num2[] = {-7, -3, -1};
    int n2 = sizeof(num2)/sizeof(int);
    mergeArrays(num1, num2, n1, n2);
return 0;
}