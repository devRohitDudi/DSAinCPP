#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fourSum(vector<int> nums, long long target)
{

    vector<vector<int>> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n;)
        {

            int p = j + 1, q = n - 1;

            long long sum = nums[i] + nums[j] + nums[p] + nums[q];

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
                ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                q--;
                p++;
            }

            j++;
            while (j < n && nums[j] == nums[j - 1])
                j++;
        }
    }
    return ans;
}

int main()
{
    // called by ai
    vector<int> nums = {1, 0, -1, 0, -2, 2}; // Example input
    long long target = 0;                    // Example target

    vector<vector<int>> result = fourSum(nums, target);

    // printing the answer
    cout << "Quadruplets that sum to " << target << " are:" << endl;
    for (const auto &quadruplet : result)
    {
        cout << "[";
        for (size_t i = 0; i < quadruplet.size(); i++)
        {
            cout << quadruplet[i];
            if (i < quadruplet.size() - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
    // just it
}