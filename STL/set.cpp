#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> nums; // ignore duplicate values and stores in ascending order
    nums.emplace(8);
    nums.emplace(64);
    nums.emplace(128);
    nums.emplace(16);
    nums.emplace(32);

    for (auto val : nums)
    {
        cout << val << endl;
    }

    // these bounds can't apply on unordered collection
    cout << endl
         << *(nums.lower_bound(15)) << endl; // should not be less than key
    cout << endl
         << *(nums.upper_bound(15)) << endl; // greater than key
}