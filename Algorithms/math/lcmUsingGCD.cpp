#include <iostream>
using namespace std;
int GCDrec(int a, int b) // recursion function of GCD using Euclid's Algorithm
{
    if (b == 0)
        return a;
    return GCDrec(b, a % b);
}
int lcm(int a, int b)
{
    int gcd = GCDrec(a, b);
    return (a * b) / gcd;
}
int main()
{
    int a = 28, b = 20;
    cout << "the lcm of number " << a << " and " << b << " is: " << lcm(a, b) << endl;
}