#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int compress(vector<char> &s)
{
    int idx = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        char ch = s[i];
        while (i < n && s[i] == ch)
        {
            count++;
            i++;
        }
        if (count == 1)
            s[idx++] = ch;
        else
        {
            s[idx++] = ch;
            string str = to_string(count);
            for (char digit : str)
            {
                s[idx++] = digit;
            }
        }
        i--;
    }
    s.resize(idx);
    return idx;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    compress(chars);
    cout << "the compressed string is: " << endl;
    for (char ch : chars)
    {
        cout << ch << " ";
    }
}