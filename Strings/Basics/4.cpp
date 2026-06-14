// Longest Common Prefix

// Problem Statement: Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".

// Examples
// Example 1
// Input:
//  str = ["flower", "flow", "flight"]
// Output:
//  "fl"
// Explanation:
//  All strings in the array begin with the common prefix "fl".

// Example 2
// Input:
//  str = ["apple", "banana", "grape", "mango"]
// Output:
//  ""
// Explanation:
//  None of the strings share a common starting sequence, so the result is an empty string.

#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &s){
    if(s.empty()){
        return "";
    }

    sort(s.begin(), s.end());

    string first = s[0];
    string last = s[s.size() - 1];
    
    string ans = "";

    int minLength = min(first.size(), last.size());

    for (int i = 0; i < minLength; i++)
    {
        if(first[i] != last[i]){
            break;
        } else {
            ans += first[i];
        }
    }
    return ans;
}

int main(){
    vector<string> s = {"flower", "flow", "flight"};
    string ans = longestCommonPrefix(s);
    cout << ans << endl;
return 0;
}