// deque -> Double ended queue
#include <iostream>
#include <deque>
#include <list>
using namespace std;
int main()
{
    deque<int> d = {2, 4, 6, 8, 9};
    list<int> l = {2, 4, 6, 8, 9};

    for (int val : d)
    {
        cout << val << " ";
    }
    cout << endl
         << "value on index is: " << d[2] << endl; // the index is accessible
    cout << l[2] << endl;
}