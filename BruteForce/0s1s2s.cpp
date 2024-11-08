#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {2, 0, 1, 1, 2, 1, 1, 0, 2, 1};
    int totalIndex = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < totalIndex; i++)
    {
        if (arr[i] == 0)
            count0++;
        if (arr[i] == 1)
            count1++;
        if (arr[i] == 2)
            count2++;
    }
    int index = 0;
    for (int i = 0; i < count0; i++)
    {
        arr[index++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[index++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[index++] = 2;
    }
    for (int i = 0; i < totalIndex; i++)
    {
        cout << arr[i] << endl;
    }
}
