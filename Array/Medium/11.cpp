// Set Matrix Zero

// Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix..

// Examples
// Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]
// Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.

// Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]
// Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0


#include<bits/stdc++.h>
using namespace std;

void setmatrixZero(vector<vector<int>> &matrix){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int culpi = 0;
    int culpj = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(matrix[i][j] == 0){

                for (int j = 0; j < cols; j++)
                {
                    if (matrix[i][j] != 0){
                        matrix[i][j] = -1;
                    }
                }

                for (int k = 0; k < rows; k++)
                {
                    if (matrix[k][j] != 0){
                        matrix[k][j] = -1;
                    }
                }
                
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    
}

int main(){
    vector<vector<int>> matrix = {{0,1,1}, {1,0,1}, {1,1,1}};
    setmatrixZero(matrix);
return 0;
}