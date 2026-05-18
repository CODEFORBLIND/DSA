// Program to generate Pascal's Triangle

// Problem Statement: Write a program to generate Pascal's triangle. In Pascal’s triangle, each number is the sum of the two numbers directly above it as shown in the figure below:

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n){
    vector<vector<int>> finalMatrix;
    for (int i = 0; i < n; i++)
    {
        vector<int> individualarr;

        for (int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i){
                individualarr.push_back(1);
            } else {
                individualarr.push_back(finalMatrix[i-1][j-1] + finalMatrix[i-1][j]); 
            }
        }
        finalMatrix.push_back(individualarr);
    }
    
    return finalMatrix;
}

int main(){
    int n = 5;
    vector<vector<int>> matrix = printPascal(n);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
return 0;
}