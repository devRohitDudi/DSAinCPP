#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};

    vec1.erase(vec1.begin() + 2);
    vec1.insert(vec1.begin() + 2, 100);
    // vec1.clear();

    cout << "is Empty? " << vec1.empty() << endl;

    for (int val : vec1)
    {
        cout << val << " ";
    }
}