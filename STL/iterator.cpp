#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1 = {10, 20, 30, 40};

    for (auto it = vec1.rbegin(); it != vec1.rend(); it++)
    {
        cout << *(it) << endl;
    }
}