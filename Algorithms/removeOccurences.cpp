#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "abcbabcababcd";
    string part = "abc";
    while (str.length() > 0 && str.find(part) < str.length())
    {
        str.erase(str.find(part), part.length());
    }
    cout << "this is the fucking good string: " << str << endl;
}