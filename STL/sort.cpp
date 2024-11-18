#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {23, 67, 98, 45, 67};
    vector<pair<int, int>> vec = {{2, 6}, {6, 4}, {7, 4}, {8, 4}};

    sort(arr, arr + 5, greater<int>());
    sort(vec.begin(), vec.end());

    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
    for (int p : arr)
    {
        cout << p << endl;
    }
}