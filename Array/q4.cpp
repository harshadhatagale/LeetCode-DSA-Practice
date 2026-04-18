#include <iostream>
#include <vector>
#include<bits/stdc++.h>
// Rotate a matrix by 90 degrees

using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    // Finding transpose
    for (int i = 0; i < matrix.size() - 1; i++)
    {
        for (int j = i + 1; j < matrix[0].size(); j++)
        {
            swap(matrix[i][j] , matrix[j][i]);
        }
    }

    // Now reversing the rows
    for (int i = 0; i < matrix.size(); i++)
    {
       reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main()
{
    vector<vector<int>> mat1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int row = 0; row < mat1.size(); row++)
    {
        for (int value = 0; value < mat1.size(); value++)
        {
            cout << mat1[row][value] << " ";
        }
        cout << endl;
    }
    rotate(mat1);
    for (int row = 0; row < mat1.size(); row++)
    {
        for (int value = 0; value < mat1.size(); value++)
        {
            cout << mat1[row][value] << " ";
        }
        cout << endl;
    }
}