#include <iostream>
#include <vector>
using namespace std;

// recursive binary search
int binarySearch(vector<int> arr, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            return binarySearch(arr, target, mid + 1, end);
        }
        else
        {
            return binarySearch(arr, target, start, mid - 1);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> arr = {2, 3, 5, 7, 9, 11, 15, 17, 20};
    int ans = binarySearch(arr, 11, 0, arr.size() - 1);
    ans == -1 ? cout << "target is not availabale" << endl : cout << "target is available on index: " << ans << endl;
}