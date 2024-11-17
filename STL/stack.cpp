// non sequential container
// push, emplace, pop, top, empty(), size(), swap()
#include <iostream>
#include <stack>
#include <list>
using namespace std;
int main()
{
    list<pair<string, int>> l = {{"CPP", 1983}, {"python", 1991}, {"java", 1996}, {"go", 2012}};
    for (pair<string, int> p : l)
    {
        cout << "the " << p.first << " was releases in: " << p.second << endl;
    }

    stack<int> s;
    s.push(2);
    s.push(4);
    s.emplace(6);

    stack<int> s2;
    swap(s2, s);
    cout << "size of s: " << s.size() << endl;
    cout << "size of s2: " << s2.size() << endl;

    while (!s2.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}