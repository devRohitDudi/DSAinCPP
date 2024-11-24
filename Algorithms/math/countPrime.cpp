// seive of Eratosthenes
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

// bool isPrime(int n)
// {
//     for (int i = 2; i * i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

int main()
{
    int n = 50;
    vector<bool> isPrime(n + 1, true);
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;
            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    cout << count << " prime numbers detected." << endl;
}