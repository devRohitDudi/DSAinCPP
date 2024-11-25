#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int n)
{
    int revNum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (revNum > INT_MAX / 10 || revNum < INT_MIN / 10)
        {
            return 0;
        }
        revNum = revNum * 10 + digit;
        n = n / 10;
    }
    return revNum;
}

bool isPalindrome(int n)
{
    if (n < 0)
        return false;
    int revNum = reverse(n);
    return n == revNum;
}

int main()
{

    int num;
    cout << "Enter a number to check palindrome: ";
    cin >> num;
    if (isPalindrome(num))
    {
        cout << num << " is a palindrome number." << endl;
    }
    else
    {
        cout << num << " isn't a palindrome number." << endl;
    }
}