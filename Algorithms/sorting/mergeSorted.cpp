#include <iostream>
#include <vector>
using namespace std;

void mergeSort(vector<int> &a, vector<int> &b, int m, int n)
{
    int idx = n + m - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (a[i] >= b[j])
        {
            a[idx--] = a[i--];
        }
        else
        {
            a[idx--] = b[j--];
        }
    }
    while (j >= 0)
    {
        a[idx--] = b[j--];
    }
}

int main()
{
    vector<int> a = {1, 2, 3, 0, 0, 0};
    vector<int> b = {2, 4, 6};
    int m = 3, n = 3;
    mergeSort(a, b, m, n);
    for (int i = 0; i < n + m - 1; i++)
    {
        cout << a[i] << endl;
    }
}