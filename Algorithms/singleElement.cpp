#include <iostream>
#include <vector>
using namespace std;
int search(vector<int> list)
{
    int n = list.size();
    if (n == 1)
        return list[0];
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (mid == 0 && list[0] != list[1])
            return list[mid];
        if (mid == n - 1 && list[n - 1] != list[n - 2])
            return list[mid];

        if (list[mid] != list[mid - 1] && list[mid] != list[mid + 1])
        {
            return list[mid];
        }
        if (mid % 2 == 0)
        {
            if (list[mid] == list[mid - 1])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (list[mid] == list[mid - 1])
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
    vector<int> list = {1, 1, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7};
    int ans = search(list);
    cout << "the single element in given array is: " << ans << endl;
    return 0;
}