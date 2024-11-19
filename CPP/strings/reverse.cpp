#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "this fucking string is for reverse";

    int start = 0, end = str.length() - 1;
    // int mid = start + (end - start) / 2;

    while (start < end)
    {
        swap(str[start], str[end]);
        start++, end--;
    }
    cout << str << endl;
    reverse(str.begin(), str.end());

    cout << str << endl;
}