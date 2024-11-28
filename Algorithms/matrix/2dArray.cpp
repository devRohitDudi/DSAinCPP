#include <iostream>
using namespace std;
int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    cout << matrix[2][1] << endl;

    cout << "the matrix data is: " << endl;
    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 3; c++)
        {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
}