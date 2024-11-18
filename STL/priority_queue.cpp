// maxHeap of binary tree
#include <iostream>
#include <queue>
#include <stack>
using namespace std;
int main()
{
    priority_queue<int> pq;

    pq.push(3);
    pq.push(7);
    pq.push(10);
    pq.push(2);
    while (!pq.empty())
    {
        cout << pq.top() << " " << endl;
        pq.pop();
    }

    cout << "the priority_queue with lowest" << endl;
    priority_queue<int, vector<int>, greater<int>> rpq;
    rpq.push(3);
    rpq.push(7);
    rpq.push(10);
    rpq.push(2);
    while (!rpq.empty())
    {
        cout << rpq.top() << " " << endl;
        rpq.pop();
    }
    return 0;
}