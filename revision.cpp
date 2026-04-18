#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>> &matrix)
{
    vector<int> row(matrix.size(),0);
    vector<int> column(matrix.size(),0);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            if (0 == matrix[i][j])
            {
                row[i] = 1;
                column[j] = 1;
            }
        }
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
        {
            if (row[i] == 1 || row[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> matrix= {{1,1,1},{1,0,1},{1,1,1}};

}