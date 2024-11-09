#include <iostream>
#include <vector>
using namespace std;

void arrange(vector<int> &nums, int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            mid++, low++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int n = nums.size();
    arrange(nums, n);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << endl;
    }
}