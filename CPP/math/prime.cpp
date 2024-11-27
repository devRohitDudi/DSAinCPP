#include <iostream>
#include <math.h>
using namespace std;

string isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return " is a non prime number.";
        }
    }
    return "prime number.";
}

int main()
{
    int n = 20;
    cout << isPrime(n) << endl;
}