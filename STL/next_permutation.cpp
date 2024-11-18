#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> nums = {1, 8, 9, 6, 5};

    cout << "max element is:" << *(max_element(nums.begin(), nums.end())) << endl;
    cout << "max element is:" << *(min_element(nums.begin(), nums.end())) << endl;

    next_permutation(nums.begin(), nums.end());

    for (int num : nums)
    {
        cout << num << " " << endl;
    }
}