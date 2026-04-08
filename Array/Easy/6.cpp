// Rotate array by K elements

// Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

// Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
// Output : [6, 7, 1, 2, 3, 4, 5]
// Explanation : rotate 1 step to the right: [7, 1, 2, 3, 4, 5, 6]
// rotate 2 steps to the right: [6, 7, 1, 2, 3, 4, 5] 

// Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
// Output : [3, 4, 5, 6, 1, 2]
// Explanation :rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]



#include<bits/stdc++.h>
using namespace std;

class rotateArray{
    public:
    void rotate(int *arr, int n, int k, string shift){
        string val1 ="right";
        string val2 ="left";
        int counter = 0;
        int dummyarr[n];
        if(shift == val1){ //right shift means right to left
            int dummyarr[n];
            while (counter < k)
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
                counter++;
                cout << endl;
            }
        }

        if(shift == val2){ //left shift means left to right
            int dummyarr[n];
            while (counter < k)
            {
                int j = 0;
                for (int i = 1; i < n; i++)
                {
                    dummyarr[j] = arr[i];
                    j++;
                }
                dummyarr[j] = arr[0];
                for (int i = 0; i < n; i++)
                {
                    cout << dummyarr[i] << " ";
                    arr[i] = dummyarr[i];
                }
                counter ++;
                cout << endl;
            }
        }
    }

};
int main(){
    rotateArray rt;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    int k = 6; //counter that tells how many elements to shift to left or right
    string shift = "right";
    rt.rotate(arr, n, k, shift);
return 0;
}