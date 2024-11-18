#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec = {2, 7, 3, 4, 8, 3};

    reverse(vec.begin() + 1, vec.begin() + 3); // reverse a range in vector

    for (auto num : vec)
    {
        cout << num << " " << endl;
    }
    return 0;
}