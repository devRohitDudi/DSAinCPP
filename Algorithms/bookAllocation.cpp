#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int books, int m, int maxPages)
{
    int students = 1, pages = 0;

    for (int i = 0; i < books; i++)
    {
        if (arr[i] > maxPages)
        {
            return -1;
        }
        if (pages + arr[i] <= maxPages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}

int allocation(vector<int> arr, int books, int m)
{
    if (m > books)
        return -1;

    int sum = 0, ans = -1;
    for (int i = 0; i < books; i++)
    {
        sum += arr[i];
    }

    int st = 1, end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, books, m, mid))
        {
            ans = mid;
            end = mid - 1;
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
    vector<int> arr = {15, 17, 20};
    int books = 4, m = 2;
    int ans = allocation(arr, books, m);
    cout << "the minimum value of maximum pages per student is:" << ans << endl;
    return 0;
}