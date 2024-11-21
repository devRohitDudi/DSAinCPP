// personal Assignment
#include <iostream>
#include <algorithm>
using namespace std;

bool isAlphaNumeric(char ch)
{
    if (tolower(ch) <= 'z' && tolower(ch) >= 'a' || ch <= '9' && ch >= '0')
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
    string str = "HA@@@@nn*ah";

    int st = 0, end = str.length() - 1;
    bool answer;
    while (st < end)
    {
        if (!isAlphaNumeric(str[st]))
        {
            st++;
            continue;
        }
        if (!isAlphaNumeric(str[end]))
        {
            end--;
            continue;
        }

        if (tolower(str[st] != str[end]))
        {
            answer = false;
        }
        else
        {
            answer = true;
        }
        st++, end--;
    }
    if (answer)
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