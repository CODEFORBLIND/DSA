// Largest Odd Number in a String.

// Problem Statement: Given a string s, representing a large integer, the task is to return the largest-valued odd integer (as a string) that is a substring of the given string s.
// The number returned should not have leading zero's. But the given input string may have leading zero.

// Examples
// Example 1
// Input:
//  s = "5347"
// Output:
//  "5347"
// Explanation:
//  The odd numbers formed by the given string are → 5, 3, 53, 347, 5347. The largest odd number without leading zeroes is 5347.

#include<bits/stdc++.h>
using namespace std;

string largestOdd(string s){
    int index = -1;
    for (int i = s.length() - 1; i >= 0; i++) {
        if((s[i] - '0') % 2 == 1){
            index = i;
            break;
        }
    }
    int i = 0;
    while (i <= index && s[i] == '0')
    {
        i++;
    }
    
    return s.substr(i, index - i + 1); // 0 to 3-0+1 -> index 0 to length of 4
}

int main(){
    string s = "5347";
    string result = largestOdd(s);
    cout << "Largest Odd Number: " << result << endl;
return 0;
}