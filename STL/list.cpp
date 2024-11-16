#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> li = {2, 4, 6, 8, 10};

    li.push_back(12);
    li.push_front(0);
    li.pop_back();
    li.pop_front();

    for (int val : li)
    {
        cout << val << " ";
    }
}