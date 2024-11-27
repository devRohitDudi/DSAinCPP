#include <iostream>
#include <vector>
using namespace std;
int recBinarySearch(vector<int> arr, int target, int st, int end)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target < arr[mid])
        {
            return recBinarySearch(arr, target, st, mid - 1);
        }
        else if (target > arr[mid])
        {
            return recBinarySearch(arr, target, mid + 1, end);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    int target = 7;
    vector<int> arrOdd = {-2, 0, 3, 6, 7, 8, 9};
    vector<int> arrEven = {-2, 0, 3, 7, 8, 9, 12, 15};

    int st = arrOdd[0], end = arrOdd.size();
    int ans = recBinarySearch(arrOdd, target, st, end);
    cout << "the target " << target << " is exists at " << ans << "th Index on array." << endl;
}