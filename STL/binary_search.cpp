#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {12, 34, 76, 98, 34, 75, 23, 78};

    sort(vec.begin(), vec.end());
    cout << binary_search(vec.begin(), vec.end(), 75) << endl;
}