#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> mat)
{
    int m = mat.size(), n = mat[0].size();
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    vector<int> ans;
    while (top <= bottom && left <= right)
    {
        // top
        for (int i = left; i <= right; i++)
        {
            ans.push_back(mat[top][i]);
        }
        top++;

        // right
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(mat[i][right]);
        }
        right--;

        // bottom
        if (top <= bottom)
        {
            for (int i = right - 1; i >= left; i--)
            {
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        // left
        if (right >= left)
        {
            for (int i = bottom - 1; i >= top + 1; i--)
            {
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    vector<int> ans = spiralMatrix(matrix);
    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;
}
