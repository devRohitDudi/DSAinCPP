#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int maxRowSum(int arr[][3], int row, int column)
{
    int maxSum = INT_MIN;
    for (int r = 0; r < row; r++)
    {
        int rowSum = 0;
        for (int c = 0; c < column; c++)
        {
            rowSum += arr[r][c];
        }
        if (rowSum > maxSum)
        {
            maxSum = 0;
            maxSum += rowSum;
        }
    }
    return maxSum;
}

int main()
{
    int arr[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int r = 4, c = 3;
    int ans = maxRowSum(arr, r, c);
    cout << "the max row sum of given 2d array is: " << ans << endl;
}