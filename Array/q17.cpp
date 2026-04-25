#include <iostream>
#include <vector>

using namespace std;
// Brute force approch
double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> mergedArray;
    int m = nums1.size(), n = nums2.size();
    int p = 0, q = 0;

    // Step 1: merge till both have elements
    while (p < m && q < n)
    {
        if (nums1[p] <= nums2[q])
        {
            mergedArray.push_back(nums1[p]);
            p++;
        }
        else
        {
            mergedArray.push_back(nums2[q]);
            q++;
        }
    }

    // Step 2: remaining elements of nums1
    while (p < m)
    {
        mergedArray.push_back(nums1[p]);
        p++;
    }

    // Step 3: remaining elements of nums2
    while (q < n)
    {
        mergedArray.push_back(nums2[q]);
        q++;
    }

    if (mergedArray.size() % 2 == 0)
    {
        int left = (mergedArray.size() / 2 )- 1;
        int right =mergedArray.size()/ 2;
        return (mergedArray[left]+ mergedArray[right])/2.0;
    }
    else
    {
        double mid = mergedArray.size() / 2;
        return mergedArray[mid];
    }
}

int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    cout << findMedianSortedArrays(nums1, nums2);
}