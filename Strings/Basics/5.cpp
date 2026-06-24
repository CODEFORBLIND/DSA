// Isomorphic String

// Problem Statement: Given two strings s and t, determine if they are isomorphic. Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
// Examples
// Example 1
// Input:
//  s = "paper", t = "title"
// Output:
//  true
// Explanation:
//  The characters in "s" can be mapped one-to-one to characters in "t": 
// 'p' → 't', 'a' → 'i', 'e' → 'l', 'r' → 'e'
// Since the mapping is consistent and unique for each character, the strings are isomorphic.

// Example 2
// Input:
//  s = "foo", t = "bar"
// Output:
//  false
// Explanation:
//  'f' → 'b' is fine, 'o' → 'a' for the first 'o', But the second 'o' in "s" would need to map to 'r' in "t", which conflicts with the earlier mapping of 'o' → 'a'
// This inconsistency makes it impossible to convert "s" to "t" using a one-to-one character mapping.

#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s, string t){
    if(s.length() != t.length()){
        return false;
    }
    unordered_map<char, char> mapStoT;
    unordered_map<char, char> mapTtoS;

    for (int i = 0; i < s.length(); i++)
    {
        char charS = s[i];
        char charT = t[i];

        if (mapStoT.count(charS)) {
                if (mapStoT[charS] != charT) {
                    return false; 
                }
        }

        if (mapTtoS.count(charT)) {
                if (mapTtoS[charT] != charS) {
                    return false; 
                }
            }

            mapStoT[charS] = charT;
            mapTtoS[charT] = charS;
    }
    return true;
}

int main(){
    cout << (isIsomorphic("paper", "title") ? "True" : "False") << endl; // Output: True
    cout << (isIsomorphic("badc", "baba") ? "True" : "False") << endl;   // Output: False
return 0;
}