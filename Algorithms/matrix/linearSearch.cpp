#include <iostream>
using namespace std;

int linearSearch(int matrix[][3], int n, int &row, int &column)
{
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (matrix[r][c] == n)
            {
                row = r;
                column = c;
                return n;
            }
        }
    }
    return -1;
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int r = 4, c = 3;
    int n = 9;
    cout << "the number: " << linearSearch(matrix, n, r, c) << " in matrix is exist at index row:" << r << " column: " << c << endl;
}