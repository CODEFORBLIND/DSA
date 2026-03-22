// Help : https://www.w3schools.com/cpp/cpp_sets.asp
// A set stores unique elements that are sorted automatically in ascending order.

#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> s1; // by default sort this in ascending order
    s1.insert(1);
    s1.insert(9);
    s1.insert(3);
    s1.insert(5);

    // Print the elements in the set
    for(int it: s1){
        cout << it << " ";
    }
    cout << endl;

    set<int, greater<int>> s2 = {3,6,2,1,8};
    s2.insert(3); //duplicates are ignored  
    s2.erase(3); //remove particular element
    // s2.clear(); // removes all elements from the set
    cout << "Size: "<< s2.size() << endl;
    for(int dec: s2){
        cout << dec << " ";
    }
    cout << endl;


    set<string> cars;
    cout << cars.empty() << endl; // returns 1 for empty set
    set<string> cars1 = {"BMW", "RollsRoyce", "Audi", "Masarati"};
    cout << cars1.empty() << endl; // returns 0 for non-empty set
return 0;
}