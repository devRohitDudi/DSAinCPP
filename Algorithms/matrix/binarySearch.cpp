#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool searchInColumn(vector<vector<int>> mat, int target, int row)
{
    int n = mat[row].size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target == mat[row][mid])
        {
            return true;
        }
        else if (target > mat[row][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    int m = mat.size(), n = mat[0].size();
    int startRow = 0, endRow = m - 1;
    while (startRow <= endRow)
    {
        int midRow = startRow + (endRow - startRow) / 2;
        if (target >= mat[midRow][0] && target <= mat[midRow][n - 1])
        {
            return searchInColumn(mat, target, midRow);
        }
        else if (target > mat[midRow][n - 1])
        {
            startRow = midRow + 1;
        }
        else
        {
            endRow = midRow - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 16, 18, 20}};
    int target = 100;
    if (searchMatrix(mat, target))
    {
        cout << target << " is exists in matrix" << endl;
    }
    else
    {
        cout << target << " doesn't exists in matrix" << endl;
    }
}