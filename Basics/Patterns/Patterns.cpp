// Pattern 1
// * * * *
// * * * *
// * * * *
// * * * *

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Pattern 2
// *
// * *
// * * *
// * * * * 
// * * * * *

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Pattern 3
// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
    // for (int i = 1; i < 6; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
//     return 0;
// }


// Pattern 4                                                               i j value printed
// 1                                                                       1 0 1
// 2 2                                                                     2 0 2
// 3 3 3                                                                   2 1 2 2
// 4 4 4 4                                                                 3 0 3
// 5 5 5 5 5                                                               3 1 3 3
//                                                                         3 2 3 3 3  ...
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for (int i = 1; i < 6; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Pattern 5
// * * * * *
// * * * * 
// * * * 
// * * 
// * 

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for (int i = 5; i > 0; i--)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Pattern 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for (int i = 5; i > 0; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }


// Pattern 7
//     *    
//    ***
//   ***** 
//  ******* 
// *********


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int count = 4;
//     for (int i = 1; i < 10; i++)
//     {
//         if(i % 2 == 0){
//             continue;
//         } else{
//             for (int k = 0; k <= count ; k++)
//                 {
//                     cout << " ";
//                 }
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << "*";
//             }
//         }
//         count --;
//         cout << endl;
//     }
//     return 0;
// }


// SOLUTION 2
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i = 0; i<n; i++){
//         // space
//         for(int j = 0; j<n-i-1; j++){
//             cout << " ";
//         }
//         // star
//         for(int j = 0; j<2*i+1; j++){
//             cout << "*";
//         }

//         // space
//         for(int j = 0; j<n-i-1; j++){
//             cout << " ";
//         }
        
//         cout << endl;
//     }
//     return 0;
// }

// Pattern 8
// *********
//  ******* 
//   ***** 
//    ***
//     *    

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
    // int count = 0;
    // for (int i = 9; i >= 1; i--)
    // {
    //     if(i % 2 == 0){
    //         continue;
    //     } else{
    //         for (int k = 0; k <= count ; k++)
    //             {
    //                 cout << " ";
    //             }
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     count ++;
    //     cout << endl;
    // }
//     return 0;
// }


// SOLUTION 2
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i = 0; i<n; i++){
//         // space
//         for(int j = 0; j<i; j++){
//             cout << " ";
//         }
//         // star
//         for(int j = 0; j<2 * n-(2*i+1); j++){
//             cout << "*";
//         }

//         // space
//         for(int j = 0; j<i; j++){
//             cout << " ";
//         }
        
//         cout << endl;
//     }
//     return 0;
// }

// Patern 9
//     *    
//    ***
//   ***** 
//  ******* 
// *********
// *********
//  ******* 
//   ***** 
//    ***
//     * 

// #include <bits/stdc++.h>
// using namespace std;

// void upwards_pyramid(int N){
//     int count = N - 1;
//     for (int i = 1; i < N*2; i++)
//     {
//         if(i % 2 == 0){
//             continue;
//         } else{
//             for (int k = 0; k <= count ; k++)
//                 {
//                     cout << " ";
//                 }
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << "*";
//             }
//         }
//         count --;
//         cout << endl;
//     }
// }

// void downwards_pyramid(int N){
//     int count = 0;
//     for (int i = N*2; i >= 1; i--)
//     {
//         if(i % 2 == 0){
//             continue;
//         } else{
//             for (int k = 0; k <= count ; k++)
//                 {
//                     cout << " ";
//                 }
//             for (int j = 1; j <= i; j++)
//             {
//                 cout << "*";
//             }
//         }
//         count ++;
//         cout << endl;
//     }
// }

// int main(){
//     upwards_pyramid(3);
//     downwards_pyramid(3);
//     return 0;
// }


// Pattern 10
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// #include <bits/stdc++.h>
// using namespace std;

// void upper_part(int N){
//     for (int i = 1; i < N+1; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// void lower_part(int N){
//     for (int i = N-1; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


// int main(){
//     upper_part(5);
//     lower_part(5);
//     return 0;
// }

// Solution 2
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i = 1; i<=2n-1; i++){
//         int stars = i;
//         if(i > n){
//             star = 2*n-i;
//         }
//         for(int j =1; j<=stars; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }



// Pattern 11
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int pos = 1;
//     for (int i = 1; i < 6; i++)
//     {
//         if (i % 2 == 0){
//             for (int j = 1; j <= i; j++)
//             {
//                 if(j % 2 == 0){
//                     cout << "1" << " ";
//                 } else {
//                     cout << "0" << " ";
//                 }
//             }
//             cout << endl;
//         } else {
//             for (int j = 1; j <= i; j++)
//             {
//                 if(j % 2 == 0){
//                     cout << "0" << " ";
//                 } else {
//                     cout << "1" << " ";
//                 }
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }


// SOLUTION 2
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     int start = 1;
//     for(int i = 0; i<n; i++){
//         if(i%2 == 0) start = 1;
//         else start = 0;
//         for(int j = 0; j<=i; j++){
//             cout << start;
//             start = 1 - start;
//         }
//         cout << endl;
//     }
//     return 0;
// }



// Pattern 12
// 1      1
// 12    21
// 123  321
// 12344321


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int N = 4;
//     for (int i = 1; i <= N; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j;
//         }
//         for (int k = N*2; k <= N*2; k++)
//         {
//             cout << i;
//         }
        
//     }
//     return 0;
// }


// Solution 2
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     int space =  2 * (n-1);
//     for(int i = 1; i<=n; i++){
//         // numbers
//         for(int j = 1; j<=i; j++){
//             cout << j;
//         }

//         // space
//         for(int j = 1; j<=space; j++){
//             cout << " ";
//         }

//         // numbers
//         for(int j = i; j>=1; j--){
//             cout << j;
//         }

//         cout << endl;
//         space -= 2;
//     }
//     return 0;
// }


// Pattern 13
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int num = 1;
//     for(int i = 1; i<=5; i++){
//         for(int j = 1; j<=i; j++){
//             cout << num << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// Pattern 14
// A
// A B 
// A B C 
// A B C D 
// A B C D E 


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for(int i = 0; i < 5; i++){
//         for(char ch = 'A'; ch <= 'A' + i; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Solution 2
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
    
//     for(int i = 1; i<=n; i++){
//         char ch = 'A';
//         for(int j=1; j<=i; j++){
//             cout << ch;
//             ch++;
//         }
        
//         cout << endl;
//     }
//     return 0;
// }



// Pattern 15
// A B C D E 
// A B C D 
// A B C 
// A B 
// A

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     for(int i = 0; i < 5; i++){
//         for(char ch = 'A'; ch <= 'A' + (n - i -1); ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Pattern 16
// A
// B B
// C C C 
// D D D D
// E E E E E


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i = 0; i<n; i++){
//         char ch = 'A' + i;
//         for(int j = 0; j<=i; j++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Pattern 17
//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
    
//     for(int i = 0; i<n; i++){
//         // space
//         for(int j = 0; j<n-i-1; j++){
//             cout << " ";
//         }
        
//         // Character
//         char ch = 'A';
//         int breakpoint = (2*i+1) / 2;
//         for(int j = 1; j<=2*i + 1; j++){
//             cout << ch;
//             if(j <= breakpoint) ch++;
//             else ch--;
//         }


//         // space
//         for(int j = 0; j<n-i-1; j++){
//             cout << " ";
//         }
        
//         cout << endl;
//     }
//     return 0;
// }


// Pattern 18
// E
// D E
// C D E
// B C D E
// A B C D E

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int i = 0; i<n; i++){
//         for(char ch = 'E'- i; ch<='E'; ch++){
//             cout << ch << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }




// Pattern 19   row   stars  spaces  stars
// **********    0      5      0       5
// ****  ****    1      4      2       4 
// ***    ***    2      3      4       3
// **      **    3      2      6       2
// *        *    4      1      8       1    firsthalf completes here
// *        *    4      1      8       1 
// **      **    3      2      6       2
// ***    ***    2      3      4       3
// ****  ****    1      4      2       4 
// **********    0      5      0       5


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     int iniSpace = 0;
//     // First Half Code
//     for(int i = 0; i<n; i++){
        
//         // stars
//         for(int j = 1; j<=n-i; j++){
//             cout << "*";
//         }
//         // spaces
//         for(int j = 0; j<iniSpace; j++){
//             cout << " ";
//         }
//         // stars
//         for(int j = 1; j<=n-i; j++){
//             cout << "*";
//         }
//         iniSpace += 2;
//         cout << endl;
//     }

//     // Second Half Code

//     iniSpace = 2*n - 2; // 8
//     for(int i = 1; i<=n; i++){
//         // stars
//         for(int j = 1; j<=i; j++){
//             cout << "*";
//         }
//         // spaces
//         for(int j = 0; j<iniSpace; j++){
//             cout << " ";
//         }
//         // stars
//         for(int j = 1; j<=i; j++){
//             cout << "*";
//         }
//         iniSpace -= 2;
//         cout << endl;
//     }
     
//     return 0;
// }



// Pattern 20      stars   spaces    stars
// *        *       1        8         1
// **      **       2        6         2
// ***    ***       3        4         3
// ****  ****       4        2         4
// **********       5        0         5
// ****  ****       4        2         4
// ***    ***       3        4         3
// **      **       2        6         2
// *        *       1        8         1


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     int spaces = 2*n - 2;
//     for(int i = 1; i<=2*n-1; i++){
//         // stars
//         int stars = i;
//         if(i > n){
//             stars = 2*n-i;
//         }
//         for(int j=1; j<=stars; j++){
//             cout << "*";
//         }

//         // spaces
//         for(int j = 1; j<=spaces; j++){
//             cout << " ";
//         }

//         // stars
//         for(int j=1; j<=stars; j++){
//             cout << "*";
//         }
//         cout << endl;
//         if(i<n){
//             spaces -=2;
//         } else {
//             spaces += 2;
//         }
//     }
     
//     return 0;
// }


// Pattern 21
// ****
// *  *
// *  *
// ****


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 4;
//     for(int i = 0; i<n; i++){
//         for(int j = 0; j<n; j++){
//             if(i == 0 || j== 0 || i == n-1 || j == n-1){
//                 cout << "*";
//             }
//             else cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// Pattern 22
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n = 4;
//     int size = 2 * n - 1;

//     for (int i = 1; i <= size; i++) {
//         for (int j = 1; j <= size; j++) {
//             for (int layer = 1; layer <= n; layer++) {
//                 // boundaries for this layer
//                 if (i == layer || j == layer || i == size - layer + 1 || j == size - layer + 1) {
//                     cout << n - layer + 1;
//                     break;
//                 }
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }




