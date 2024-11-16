// these works in O(1) (constant) time complexity
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec(10, 3); // three value ten times

    vector<int> vec1;
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);

    vec1.emplace_back(40);

    vec1.pop_back();

    cout << "size: " << vec1.size() << endl;
    cout << "capacity: " << vec1.capacity() << endl;
    cout << "value at index 2 is:  " << vec1.at(2) << " or: " << vec1[2] << endl;
    cout << "front: " << vec1.front() << " back: " << vec1.back() << endl;

    vector<int> vec2(vec1);
    for (int val : vec2)
    {
        cout << val;
    }
}