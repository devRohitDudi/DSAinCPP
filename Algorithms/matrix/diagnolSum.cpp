#include <iostream>
using namespace std;

int diagnolSum(int arr[][4], int n)
{
    int sum = 0;
    // for (int i = 0; i < n; i++) O(n*n)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (i == j)
    //         {
    //             sum += arr[i][j];
    //         }
    //         else if (j == n - 1 - i)
    //         {
    //             sum += arr[i][j];
    //         }
    //     }
    // }

    /*optimize version*/
    for (int i = 0; i < n; i++) // O(n)
    {
        sum += arr[i][i];
        if (i != n - i - 1)
        {
            sum += arr[i][n - i - 1];
        }
    }
    return sum;
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4;
    cout << "the diagnol sum is: " << diagnolSum(arr, n) << endl;
}