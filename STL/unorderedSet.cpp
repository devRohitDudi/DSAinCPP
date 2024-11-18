#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> nums; // stores in random order
    nums.emplace(8);
    nums.emplace(64);
    nums.emplace(128);
    nums.emplace(16);
    nums.emplace(32);
    nums.emplace(8);
    nums.emplace(64);
    for (auto val : nums)
    {
        cout << val << endl;
    }
}