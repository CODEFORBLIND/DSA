//Source: https://www.w3schools.com/cpp/cpp_maps.asp

// Elements in a map are:

// Accessible by keys (not index), and each key is unique.
// Automatically sorted in ascending order by their keys.

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> numbers = { {0,1}, {1,2}, {4,5},{3,7}, {15, 6}, {13,3}, {10,12}};
    numbers.insert({14,49});
    numbers.insert({14,9}); //only the first value at the same key is taken and not the second one
    numbers.erase(3);
    for(auto it: numbers){
        cout << "Value at index : " << it.first << " is " << it.second << endl;
    }

return 0;
}