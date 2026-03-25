#include<bits/stdc++.h>
using namespace std;

void mergeSort(int n, int arr[]){
    
}

int main(){
    int n;
    cout << "Enter the number of elements you want in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(n, arr);

    cout << "Sorted array: ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
return 0;
}