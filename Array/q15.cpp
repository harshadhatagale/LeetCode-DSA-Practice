#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int reversePairs(vector<int> &nums)
{
    int reversePairs = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i]> 2* nums[j])
            {
                reversePairs++;
            }
        }
    }
    return reversePairs;
}

int main()
{
}