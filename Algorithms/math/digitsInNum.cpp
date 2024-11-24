#include <iostream>
using namespace std;
void digits(int n)
{
    int nVal = n;
    int count = 0;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += digit;
        count++;
        n = n / 10;
    }
    cout << "sum of digits in " << nVal << " is: " << sum << endl;
    cout << "total digits in " << nVal << " are: " << count << endl;
}
int main()
{
    int n = 1234;
    digits(n);
}