// personal Assignment
#include <iostream>
#include <algorithm>
using namespace std;

bool isAlphaNumeric(char str)
{
    if (str <= 'z' && str >= 'a' && str <= 'Z' && str >= 'A' && str <= 9 && str >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string str = "H@ann*ah";

    int st = 0, end = str.length() - 1;

    string original;
    while (st < end)
    {
        if (!isAlphaNumeric(str[st]))
        {
            st++;
            if (!isAlphaNumeric(str[end]))
            {
                end--;
            }
        }
        tolower(str[st]);
        tolower(str[end]);
        original = str;
        swap(str[st], str[end]);
    }
    if (original == str)
    {
        cout << "yeah, the string: " << str << " is is a valid palindrome." << endl;
    }
    else
    {
        cout << "not a valid palindrome" << endl;
    }
    return 0;
}

// yeah... it's done