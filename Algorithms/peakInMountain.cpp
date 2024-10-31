#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int st = 1, end = arr.size() - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        else if (arr[mid] > arr[mid - 1])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> list = {1, 3, 4, 5, 7, 8, 9, 6, 3, 1};
    int ans = peakIndexInMountainArray(list);
    cout << "the peak element in array is: " << list[ans] << " on index: " << ans << endl;
}