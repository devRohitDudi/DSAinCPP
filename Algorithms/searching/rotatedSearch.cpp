#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<int> arr, int target)
{
    int st = 0, end = arr.size() - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] == target)
        {
            return arr[mid];
        }

        if (arr[st] <= arr[mid])
        { // left half
            if (arr[st] <= target && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        { // right half
            if (arr[mid] <= target && target <= arr[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int target = 4;
    vector<int> rotated = {1, 2, 3, 4, 5, 6, 0, 1, 2, 3};
    int ans = BinarySearch(rotated, target);
    cout << "the target " << target << " is exists at " << ans << "th Index on rotated sorted array." << endl;
}