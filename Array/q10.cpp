#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;
vector<int> majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<int> result;

    int n = nums.size();
    int freq = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            if (freq > n / 3)
                result.push_back(nums[i - 1]);

            freq = 1;
        }
    }

    if (freq > n / 3)
        result.push_back(nums[n - 1]);

    return result;
}

int main()
{
    vector<int> nums = {1, 2};
    vector<int> result = majorityElement(nums);
    for (int x : result)
    {
        cout << x << endl;
    }
}