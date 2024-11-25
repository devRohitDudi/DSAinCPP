#include <iostream>
using namespace std;
bool isArmstrong(int n)
{
    int originalNum = n;
    int sumOfCubes = 0;
    while (n != 0)
    {
        int digit = n % 10;
        int cube = (digit * digit * digit);
        sumOfCubes += cube;
        n = n / 10;
    }
    return sumOfCubes == originalNum;
}
int main()
{
    int n = 153;
    if (isArmstrong(n))
    {
        cout << n << " is an armstrong number" << endl;
    }
    else
    {
        cout << n << " not a armstrong number" << endl;
    }
}