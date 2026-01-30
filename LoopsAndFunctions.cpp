#include <bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside doSomething function : " << arr[0] << endl;

}

int main(){
    int n = 5;
    int arr[n];
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Value inside int main : " << arr[0] <<endl;
    doSomething(arr, n);
    cout << "Value after executing the doSomething function : " << arr[0] << endl;
    return 0;
}

// Array - elements are stored in consecutive memory location
// Strings are mutable here