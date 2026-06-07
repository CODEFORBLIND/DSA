// Reverse Words in a String

// Problem Statement: Given an input string, containing upper-case and lower-case letters, digits, and spaces( ' ' ). A word is defined as a sequence of non-space characters. The words in s are separated by at least one space. Return a string with the words in reverse order, concatenated by a single space.

// Examples
// Input: s = "welcome to the jungle"
// Output: "jungle the to welcome"
// Explanation: The words in the input string are "welcome", "to", "the", and "jungle". Reversing the order of these words gives "jungle", "the", "to", and "welcome". The output string should have exactly one space between each word.

#include<bits/stdc++.h>
using namespace std;

void revWordsInString(string s){
    string test = "";
    vector<string> testarr;
    int count = 0;
    for(char ch : s){
        if(ch == ' '){
            if(test != "")
            testarr.push_back(test);
            count++;
            test = "";
        } else {
            test += ch;
        }
    }

    if(test != ""){
        testarr.push_back(test);
    }


    for (int i = testarr.size() - 1; i >= 0; i--)
    {
        cout << testarr[i] << " ";
    }
    cout << endl;
}

int main(){
    string s = "welcome to the jungle";
    revWordsInString(s);
return 0;
}

// Method 2
// #include <iostream>
// #include <string>
// #include <sstream>

// using namespace std;

// string revWordsInStringPro(string s) {
//     stringstream ss(s);
//     string word;
//     string result = "";

    // ss >> word automatically extracts characters until it hits a space
//     while (ss >> word) {
//         if (result == "") {
//             result = word;
//         } else {
            // Prepend the new word to the front of the result string
//             result = word + " " + result;
//         }
//     }

//     return result;
// }