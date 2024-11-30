#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9, 10, 11}, {12, 13, 14}};
    cout << "size of vector is: " << vec.size();
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}