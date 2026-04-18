#include <iostream>
#include <vector>

using namespace std;
// Brute force approach
int findDuplicate(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && i != j)
            {
                return nums[i];
            }
        }
    }
}
// Brute force approach
int findDuplicate(vector<int>& nums) {
    int slow = nums[0];
    int fast = nums[0];

    // Step 1: Detect cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Step 2: Find duplicate
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}
int main()
{
    vector<int> nums = {3, 1, 3, 4, 2};
    cout << findDuplicate(nums);
}