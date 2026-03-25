// Count digits in a number
// Example 1:
// Input:N = 12345
// Output:5
// Explanation:  The number 12345 has 5 digits.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     int count = 0;
//     cout << "Enter the number : ";
//     cin>> n;
//     if(n == 0){
//         count = 1;
//     }
//     while(n!=0){
//         n = n/10;
//         count ++;
//     }
//     cout << count;
//     return 0;
// }


// Reverse Digits of A Number
// Examples
// Input: N = 12345
// Output:54321
// Explanation: The reverse of 12345 is 54321.

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     int rvs = 0;
//     int ld;
//     cin >> n;
//     while (n !=0)
//     {
//         ld = n%10;
//         rvs = rvs * 10 + ld;
//         n = n/10;

//     }
//     cout << rvs;
//     return 0;
// }


// Check if a number is Palindrome or Not
// Example 1:
// Input:N = 4554
// Output:Palindrome Number
// Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 0;
//     cin >> n;
//     int rvs = 0;
//     int ld;
//     int orin = n;
//     while (n !=0)
//     {
//         ld = n%10;
//         rvs = rvs * 10 + ld;
//         n = n/10;
//     }
//     cout << rvs<<endl;
//     cout << orin<<endl;
//     if(rvs == orin){
//         cout << "Palindrome";
//     } else{
//         cout << "Not Palindrome";
//     }
//     return 0;
// }


// Find GCD of two numbers
// Example 1:
// Input: N1 = 9, N2 = 12
// Output: 3
// Explanation:
// Factors of 9: 1, 3, 9
// Factors of 12: 1, 2, 3, 4, 6, 12
// Common Factors: 1, 3
// Greatest common factor: 3 (GCD)

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a, b;
//     int gcd = 0;
//     cin >> a >> b;
//     for (int i = 1; i < min(a,b); i++)
//     {
//         if(a%i == 0 && b%i ==0){
//             gcd = i;
//         }
//     }
//     cout << gcd << endl;
    
//     return 0;
// }


// Check if a number is Armstrong Number or not
// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
// Example 1:
// Input:N = 153
// Output:True

// #include<bits/stdc++.h>
// using namespace std;

// int main(int argc, char const *argv[])
// {
//     int a;
//     cin >> a;
//     int t =a;
//     int count = 0;
//     vector<int> chel;
//     int sumdih = 0;

//     if (a == 0){
//         cout<<"Armstrong Number";
//         return 0;
//     }
//     else{
//         while (a!=0)
//         {
//             count++;
//             chel.push_back(a%10);
//             a = a/10;
//         }
//         for (int i =0; i<count; i++){
//             sumdih += pow(chel[i],count);
//         }
//         if (sumdih == t){
//             cout<<"Armstrong";
//         }
//         else{
//             cout<<"not";
//         }
//     }
    
//     return 0;
// }


// Print all Divisors of a given Number
// Input: N = 36
// Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
// Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     if(n == 0){
//         cout << "Infinite Divisors";
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if(n%i == 0){
//             cout << i << " ";
//         }
//     }

//     return 0;
// }

// Check if a number is prime or not

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     bool isPrime = true;
//     if(n <= 1){
//         isPrime = false;
//     }
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if(n%i == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime){
//         cout << "Prime Number";
//     } else{
//         cout << "Not a Prime Number";
//     }
//     return 0;
// }

