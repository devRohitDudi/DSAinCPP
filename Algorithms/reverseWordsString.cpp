#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseWords(string &str)
{
    int n = str.length();
    reverse(str.begin(), str.end());
    string ans = "";

    for (int i = 0; i < n; i++)
    {
        string word = "";
        while (i < n && str[i] != ' ')
        {
            word += str[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }
    return ans.substr(1);
}

int main()
{
    string str = "the man is travelling";
    string ans = reverseWords(str);
    cout << "the string after reverse words: " << ans << endl;
}