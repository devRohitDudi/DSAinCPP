#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "hello from ubuntu";
    cout << "enter the paragraph: ";
    getline(cin, str);

    cout << endl
         << str << endl;
    cout << "the length of string is: " << str.length() << endl;
}