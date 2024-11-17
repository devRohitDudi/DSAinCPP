#include <iostream>
#include <vector>
using namespace std;
int main()
{
    pair<string, pair<string, int>> p = {"cpp", {"rohit", 19}};

    cout << "learnig: " << p.first << " name is: " << p.second.first << " age: " << p.second.second << endl;

    // vector of pairs
    vector<pair<int, string>> vec1 = {{18, "alex"}, {17, "melha"}, {25, "Boromir"}, {19, "sam"}, {22, "Aragorn"}};

    vec1.push_back({50, "gandalf"}); // insert the elements
    vec1.emplace_back(30, "thomas"); // creates in-place objects

    for (pair<int, string> p : vec1)
    {
        cout << "the age of " << p.second << " is: " << p.first << endl;
    }
}
