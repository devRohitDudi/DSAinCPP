#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}
int main()
{
    vector<int> arr = {21, 4, 5, 7, 9, 11};

    isSorted(arr, arr.size()) ? cout << "Is sorted.\n" : cout << "Not sorted.\n";
}