#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// using 2 pointer approch
void twoSum(vector<int> nums, int target)
{
    vector<int> ans;
    unordered_map<int, int> m;

    for (int i = 0; i < nums.size(); i++)
    {
        int first = nums[i];
        int second = target - first;

        if (m.find(second) != m.end()) // find of unordered takes constant time complexity
        {
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first] = i;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i < ans.size() - 1)
        {
            cout << ',';
        }
    };
}

int main()
{
    vector<int> nums = {2, 7, 9, 15};
    int target = 11;
    twoSum(nums, target);
}