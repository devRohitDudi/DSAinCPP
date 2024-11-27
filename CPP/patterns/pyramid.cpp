#include <iostream>
using namespace std;
int main()
{
    int num = 5;
    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k <= i + 1; k++)
        {
            cout << "*";
        }
        for (int l = i; l > 0; l--)
        {
            cout << "*";
        }
        cout << endl;
    }
}