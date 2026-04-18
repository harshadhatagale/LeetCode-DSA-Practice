#include <iostream>
#include <vector>
#include <bits/stdc++.h>
// Merge overlapping verticals

using namespace std;
// Brute force approch
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> result;
    sort(intervals.begin(), intervals.end());

    for(auto interval: intervals)
    {
        if (result.empty() || result.back()[1]< interval[0])
        {
            result.push_back(interval);
        }
        else
        {
            result.back()[1]= max(result.back()[1], interval[1]);
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> mat1 = {{4, 7}, {3, 5}, {1, 4}, {2, 4}};
    // for (int row = 0; row < mat1.size(); row++)
    // {
    //     for (int value = 0; value < mat1.size(); value++)
    //     {
    //         cout << mat1[row][value] << " ";
    //     }
    //     cout << endl;
    // }
    vector<vector<int>> mat2 = merge(mat1);
    for (int row = 0; row < mat2.size(); row++)
    {
        for (int value = 0; value < mat2[0].size(); value++)
        {
            cout << mat2[row][value] << " ";
        }
        cout << endl;
    }
}