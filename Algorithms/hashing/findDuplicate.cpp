
#include <iostream>
#include <vector>

using namespace std;

// using slow fast pointer approach as linked list
// cycle detection algorithm using as a linked list structure
int findDuplicate(vector<int> &nums)
{
    int slow = nums[0], fast = nums[0];

    do
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];

    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main()
{
    // input as the cycle detection algorithm
    vector<int> numsList = {1, 3, 4, 2, 2};
    // int ans = findDuplicate(&numsList);
    cout << "duplicated is:" << findDuplicate(numsList) << endl;
}