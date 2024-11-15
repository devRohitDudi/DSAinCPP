// find next num lexicographically
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int pivot = -1, n = nums.size();
    // pick pivot at decreasing order
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            pivot = i;
            break;
        }
    }
    // handle edge case
    if (pivot == -1)
    {
        reverse(nums.begin(), nums.end());
        return;
    }
    // find next larger sum after pivot
    for (int i = n - 1; i > pivot; i--)
    {
        if (nums[i] > nums[pivot])
        {
            swap(nums[i], nums[pivot]);
            break;
        }
    }

    // reverse leftover nums
    int i = pivot + 1, j = n - 1;
    while (j >= i)
    {
        swap(nums[i++], nums[j--]);
    }
}

int main()
{
    vector<int> nums1 = {1, 1, 5};
    vector<int> nums2 = {1, 2, 3};
    vector<int> nums3 = {3, 2, 1};
    nextPermutation(nums3);
    for (int i = 0; i < nums3.size(); i++)
    {
        cout << nums3[i] << endl;
    }
}