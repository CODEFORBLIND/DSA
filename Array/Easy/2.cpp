// Find Second Smallest and Second Largest Element in an array

// Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Example 1:
// Input:
//  [1, 2, 4, 7, 7, 5]  
// Output:
  
// Second Smallest : 2  
// Second Largest : 5  
// Explanation:
// The elements are sorted as 1, 2, 4, 5, 7, 7.  
// Hence, the second smallest element is 2, and the second largest element is 5.

#include<bits/stdc++.h>
using namespace std;

class findSecondMaxMin{
    public:
    void findSecondMax(int* arr1, int n){
        int max = arr1[0];
        int secondmax = INT_MIN; // setting it to the lowest possible value
        if (n < 2) {
        cout << "Array needs to have at least two elements." << endl;
        return;
        }

        for(int i=0; i<n; i++){
            if(arr1[i] == arr1[i+1]){
                cout << "No second max found as all elements are equal" << endl;
                return;
            }
            if(arr1[i] > max){
                secondmax = max;
                max = arr1[i];
                cout << "Maximum is " << max << endl;
            }
            else if(arr1[i] > secondmax && arr1[i]!= max){
                secondmax = arr1[i];
                cout << "Second Maximum is " << secondmax << endl;
            }
        }
    }

//     void findSecondMin(int* arr1, int n){
//         int min = arr1[0];
//         for(int i=0; i<n; i++){
//             if(arr1[i] > min){
//                 min = arr1[i];
//             }
//         }
//         cout << "Second Minimum is: " << min << endl;
//     }

};

int main(){
    // int arr[] = {2, 5, 1, 3, 0};
    int arr1[] = {5,5,5,5};
    int arr[] = {8, 10, 5, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    findSecondMaxMin fm;
    fm.findSecondMax(arr, size);
    fm.findSecondMax(arr1, size);
    // fm.findSecondMin(arr, size);
return 0;
}