#include <iostream>
using namespace std;
int main()
{
    char str[] = {'c', 'h', 'a', 'r', '\0'};
    char str2[100];

    cout << str << endl;
    cout << "enter the address: ";
    cin.getline(str2, 100, '$');
    cout << "output: " << str2 << endl;
}