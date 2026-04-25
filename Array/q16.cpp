#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (i>0 && nums[i]== nums[i-1]) continue;
        for (int j = i + 1; j < n; j++)
        {
            if (j>i && nums[i]== nums[i-1]) continue;
            int p = j + 1;
            int q = n - 1;
            while (p < q)
            {
                long long sum= (long long) nums[i] +(long long) nums[j] +(long long) nums[p] +(long long) nums[q];
                if (sum < target)
                {
                    p++;
                }
                else if (sum > target)
                {
                    q--;
                }
                else
                {
                    result.push_back({nums[i], nums[j], nums[p], nums[q]});
                    p++;
                    q--;
                }
            }
        }
    }
}
int main()
{
}