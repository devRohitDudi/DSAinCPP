// euclid's Algorithm to find GCD
#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int GCDrec(int a, int b)
{
    if (b == 0)
        return a;
    return GCDrec(b, a % b);
}

int main()
{
    int a = 28, b = 20;
    cout << "the Greatest common deviser of " << a << " and " << b << " is: " << GCDrec(a, b) << endl;
    return 0;
}