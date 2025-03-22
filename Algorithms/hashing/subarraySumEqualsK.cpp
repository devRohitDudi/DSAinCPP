#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subArraysEqualsK(vector<int> nums, int k)
{
    int count = 0, sum = 0, n = nums.size();
    unordered_map<int, int> prefixSums;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == k)
            count++;

        if (prefixSums.find(sum - k) != prefixSums.end())
        {
            count += prefixSums[sum - k];
        }
        prefixSums[sum]++;
    }
    return count;
}

int main()
{
    vector<int> arr = {10, 2, -2, -20, 10};
    int k = -10;
    cout << "Count of subarrays sum equals to " << k << " is: " << subArraysEqualsK(arr, k) << endl;
    return 0;
}