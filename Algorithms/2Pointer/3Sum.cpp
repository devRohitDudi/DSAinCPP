#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 2 pointer approach for every i'th index of vector
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue; // for optimization

        int j = i + 1, k = n - 1;
        while (j < k)
        {
            sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])j++; //skip all duplicates
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4}; // Example input
    vector<vector<int>> result = threeSum(nums);

    // Print the result
    cout << "Triplets that sum to zero are:" << endl;
    for (const auto &triplet : result)
    {
        cout << "[";
        for (size_t i = 0; i < triplet.size(); i++)
        {
            cout << triplet[i];
            if (i < triplet.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}