#include <iostream>
#include <vector>

using namespace std;
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        if (target >= matrix[i][0] && target <= matrix[i][matrix[i].size() - 1])
        {
            int left = 0;
            int right = matrix[i].size() - 1;
            cout<<matrix[i][right]<<endl;
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (target == matrix[i][mid])
                {
                    return true;
                }
                else if (target > matrix[i][mid])
                {
                    left = mid + 1;
                }
                else if (target < matrix[i][mid])
                {
                    right = mid - 1;
                }
            }
            return false;
        }
    }
    return false;
}

// Search in a 2D matrix

int main()
{
    vector<vector<int>> mat = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    if (searchMatrix(mat, 20))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
}