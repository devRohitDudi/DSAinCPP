// assignment
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(string str)
{
    string newStr = str;
    reverse(newStr.begin(), newStr.end());
    if (newStr == str)
        return true;
    else
        return false;
}

int main()
{
    string str;
    cout << "enter a string to check palindrome: ";
    getline(cin, str);
    if (isPalindrome(str))
    {
        cout << "alright, the string: " << '"' << str << '"' << " is palindrome." << endl;
    }
    else
    {
        cout << "this fucking string: " << '"' << str << '"' << " isn't palindrome." << endl;
    }
}