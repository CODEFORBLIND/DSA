// Rotate Image by 90 degree

// Problem Statement: Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise. The rotation must be done in place, meaning the input 2D matrix must be modified directly..

// Examples
// Input :matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]

// Output :
// matrix = [[7, 4, 1], [8, 5, 2], [9, 6, 3]]

#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<vector<int>> &matrix){

    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<vector<int>> temp;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            temp[i][j] = 0;
        }
    }
    
    // // First block
    // temp[0][0].push_back(matrix[0][0]);
    // temp[0][1].push_back(matrix[1][0]);
    // temp[0][2].push_back(matrix[2][0]);


    //     // Second block
    // temp[1][0].push_back(matrix[0][1]);
    // temp[1][1].push_back(matrix[1][1]);
    // temp[1][2].push_back(matrix[2][1]);


    //     // Third block
    // temp[2][0].push_back(matrix[0][2]);
    // temp[2][1].push_back(matrix[1][2]);
    // temp[2][2].push_back(matrix[2][2]);

    


    // Now we will reverse each block
}

int main(){
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    rotateArray(matrix);
return 0;
}