#include<bits/stdc++.h> //this is a directory that contains a lot of libraries
using namespace std;

int main(){
    // int marks;
    // cout << "Enter your marks: ";
    // cin >> marks;
    // if(marks <= 100 && marks >=80){
    //     cout << "Your grade is A";
    // } 
    // else if(marks <= 79 && marks >=60){
    //     cout << "Your grade is B";
    // } 
    // else if(marks <= 59 && marks >=50){
    //     cout << "Your grade is C";
    // } 
    // else if(marks <= 49 && marks >=45){
    //     cout << "Your grade is D";
    // } 
    // else if(marks <= 44 && marks >=25){
    //     cout << "Your grade is E";
    // } 
    // else if(marks < 25){
    //     cout << "Your grade is F";
    // } 


    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // if( age < 18){
    //     cout << "Not eligible for job";
    // }
    // else if (age <=57 ){
    //     cout << "Eligible for job!";
    //     if(age >= 55 && age <= 57){
    //         cout << ", but retirement soon!";
    //     }
    // }
    // else {
    //     cout << "Retirement Time!";
    // }
    
    // int day;
    // cout << "Enter your day: ";
    // cin >> day;

    // switch(day) {
    //     case 1:
    //         cout << "Monday";
    //         break;
    //     case 2:
    //         cout << "Tuesday";
    //         break;
    //     case 3:
    //         cout << "Wednesday";
    //         break;
    //     case 4:
    //         cout << "Thursday";
    //         break;
    //     case 5:
    //         cout << "Friday";
    //         break;
    //     case 6:
    //         cout << "Saturday";
    //         break;
    //     case 7:
    //         cout << "Sunday";
    //         break;
    // }

    char grade;
    cout << "Enter your grade (A,B): ";
    cin >> grade;

    switch(grade) {
        case 'A':
            cout << "Excellent";
            break;
        case 'B':
            cout << "Good!";
            break;
        default:
            cout << "No match found!!";
    }

    return 0;
}

// int - -10^9 to 10^9
// float - -10^12 to 10^12