// Print Name N times using Recursion

// #include <bits/stdc++.h>
// using namespace std;

// void printName(int n){
//     if(n==0){
//         return;
//     }
//     cout << "Nikhil"<<endl;
//     printName(n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     printName(n);

//     return 0;
// }


// Print 1 to N using recursion and Print N to 1 using recursion
// #include <bits/stdc++.h>
// using namespace std;

// void printnum(int n, int x){
//     cout<< x;
//     if(n ==x){
//         return;
//     }
//     printnum(n, x+1);
    
// }

// void printnumrev(int n){
//     cout<< n;
//     if(n ==1){
//         return;
//     }
//     printnumrev(n-1);
    
// }

// int main(){
//     int n;
//     cin>>n;
//     printnumrev(n);

//     return 0;
// }


// Sum of first N Natural Numbers

// #include <bits/stdc++.h>
// using namespace std;

// int printSum(int n, int sum =0){
//     if(n == 0){
//         return sum;
//     }
//     sum += n;
//     return printSum(n-1, sum);
// }

// int main(){
//     int n;
//     cin>>n;
    
//     cout<< printSum(n);

//     return 0;
// }

// Factorial of a Number using Recursion

// #include <bits/stdc++.h>
// using namespace std;


// int printFact(int n, int fact = 1){
//     if(n == 1){
//         return fact;
//     }
//     fact *=n;
//     return printFact(n-1, fact);
// }

// int main(){
//     int n;
//     cin>>n;
    
//     cout<< printFact(n);

//     return 0;
// }


// Reverse an array
// #include<bits/stdc++.h>
// using namespace std;

// void rev(int n, int x ,int arr[]){
//     if(n==x){
//         return;
//     }
//     swap(arr[n], arr[x]);
//     n++;
//     x--;
//     rev(n, x, arr);

// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n]={};
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     rev(0, n-1, arr);

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// Check if the given String is Palindrome or not
// Example 1:
// Input: Str =  “ABCDCBA”
// Output: Palindrome
// Explanation: String when reversed is the same as string.
// #include<bits/stdc++.h>
// using namespace std;

// void stringRev(int s, int e, string &strrev){
//     if(s>=e){
//         return;
//     }
//     swap(strrev[s], strrev[e]);
//     stringRev(s+1, e-1, strrev);
// }

// int main(){
//     string str = "m";
//     string strrev = str;
//     stringRev(0, str.length()-1, strrev);
//     if(str == strrev){
//         cout << "Palindrome";
//     } else{
//         cout << "Not Palindrome";
//     }
//     return 0;
// }

// Print Fibonacci Series up to Nth term
// Example 1:
// Input: N = 5
// Output: 0 1 1 2 3 5
// Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

// #include<bits/stdc++.h>
// using namespace std;

// void printfibo(int n, int a=0, int b=1){
//     if(n==0){
//         cout << a << " ";
//         return;
//     }
//     cout << a << " ";
//     printfibo(n-1, b, a+b);
// }

// int main(){
//     int n;
//     cin >> n;
//     printfibo(n);
//     return 0;
// }

