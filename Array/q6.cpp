#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> ans;
    int i=0, j = 0;
    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
        }
        else
        {
            ans.push_back(nums2[j]);
            j++;
        }
    }
    while (i < m)
    {
        ans.push_back(nums1[i]);
        i++;
    }

    while (j < n)
    {
        ans.push_back(nums2[j]);
        j++;
    }
    nums1= ans;
}

int main()
{
    vector<int> n1 = {1, 2, 3, 0, 0, 0};
    vector<int> n2 = {2, 5, 6};
    merge(n1, 3, n2, 3);
    for (int i = 0; i < n1.size(); i++)
    {
        cout<< n1[i]<<" ";
    }  
}