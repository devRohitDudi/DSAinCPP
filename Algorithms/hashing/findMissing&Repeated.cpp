#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

void findMissingAndRepeatedValues(vector<vector<int>> &grid)
{
    unordered_set<int> s;
    vector<int> ans;
    int repeated, missing;
    int n = grid.size();

    int expSum = 0,
        actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actualSum += grid[i][j];

            if (s.find(grid[i][j]) != s.end())
            {
                repeated = grid[i][j];
                cout << "repeated value is: " << repeated << endl;
            }
            s.insert(grid[i][j]);
        }
    }

    expSum = n * n * (n * n + 1) / 2;
    missing = (expSum + repeated) - actualSum;
    // a is repeating value
    // ans the b missing value retrieved
    cout << "missing value is: " << missing << endl;
}

int main()
{
    vector<vector<int>> question = {{1, 2, 3}, {4, 5, 6}, {7, 7, 9}};
    findMissingAndRepeatedValues(question);
}