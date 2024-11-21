#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char str[] = {"Hello, world!"};

    if (str == nullptr)
    {
        cout << "str is null" << endl;
    }
    else
    {
        cout << "length of string is: " << strlen(str) << "  characters" << endl;
    }

    int len = 0;
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        len++;
    }
    cout << "length of characters is: " << len << endl;
}