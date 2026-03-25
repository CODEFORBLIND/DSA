// Count frequency of each element in the array
// Example 1:
// Input: arr[] = {10,5,10,15,10,5};
// Output: 10  3
// 	        5  2
//         15  1
// Explanation: 10 occurs 3 times in the array
// 	             5 occurs 2 times in the array
//              15 occurs 1 time in the array

// #include <bits/stdc++.h>
// using namespace std;   

// int main(){
//     // int n;
//     // cin >> n; //size of array
//     // int arr[n];
//     int arr[] = {10,5,10,15,10,5};
//     //for (int i = 0; i < arr; i++){
//     //     cin >> arr[i]; //input elements
//     // }
//     unordered_map<int,int> mp;
//     // map<int,int> mp;
//     for (int i = 0; i < n; i++)
//     {
//         mp[arr[i]]++; //count frequency
//     }

//     // iterate over the map:
//     for(auto it : mp){
//             cout << it.first << "->" << it.second << endl;
//         }
//     return 0;
// }

// Find the highest/lowest frequency element
// Example 1:
// Input: array[] = {10,5,10,15,10,5};
// Output: 10 15
// Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.

#include <bits/stdc++.h>
using namespace std;   

int main(){
    int n;
    cin >> n; //size of array
    int arr[n];
    // int arr[] = {10,5,10,15,10,5};
    for (int i = 0; i < n; i++){
        cin >> arr[i]; //input elements
    }
    unordered_map<int,int> mp;
    // map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++; //count frequency
    }

    // Use a lambda function to compare elements by their 'second' value
    auto compareByValue = [](const auto& a, const auto& b) {
        return a.second < b.second;
    };

    // Find the element with the minimum value
    auto min_it = min_element(mp.begin(), mp.end(), compareByValue);

    // Find the element with the maximum value
    auto max_it = max_element(mp.begin(), mp.end(), compareByValue);
    cout << "Highest frequency element : "<< max_it->first <<endl;
    cout << "Lowest frequency element : "<< min_it->first <<endl;
    return 0;
}