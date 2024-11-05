#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isValid(vector<int> list, int n, int m, int maxTime)
{
    int painters = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (list[i] > maxTime)
        {
            return -1;
        }
        if (time + list[i] <= maxTime)
        {
            time += list[i];
        }
        else
        {
            painters++;
            time = list[i];
        }
    }
    return painters > m ? false : true;
}

int partition(vector<int> list, int n, int m)
{
    if (m > n)
        return -1;
    int sum = 0, ans = -1, maxStart = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += list[i];
        maxStart = max(list[i], maxStart);
    }
    int st = maxStart, end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(list, n, m, mid))
        {
            end = mid - 1;
            ans = mid;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> list = {40, 30, 10, 20};
    int n = 4, m = 2;
    int ans = partition(list, n, m);
    cout << "the minimum value of maximum time to partition is:" << ans << endl;
}
