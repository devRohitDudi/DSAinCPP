#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 19;
    long int n2 = 19;
    long long int n3 = 19;
    cout << __builtin_popcount(n) << endl;
    cout << __builtin_popcountl(n2) << endl;
    cout << __builtin_popcountll(n3) << endl;

    return 0;
}