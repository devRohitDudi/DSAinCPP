#include <iostream>
using namespace std;

long long nFactorial(int n, long long prevMultiple)
{
    if (n == 1)
    {
        return prevMultiple;
    }
    long long multiple = prevMultiple * (n - 1);
    return nFactorial(n - 1, multiple);
}

int main()
{
    int n = 10;
    long long ans = nFactorial(n, n);
    cout << "factorial of " << n << " is: " << ans << endl;
}