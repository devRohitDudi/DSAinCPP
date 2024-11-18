#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;

    m["engine"] = 100;
    m["thrusters"] = 1300;
    m["liquidTank"] = 50;
    m["wings"] = 200;
    m.emplace("boosters", 300);
    m.erase("wings");

    for (auto p : m) // prints in ascending order
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl
         << "counts for engine key: " << m.count("engine") << endl;
    cout << "values for engine key: " << m["engine"] << endl;
    if (m.find("engine") != m.end())
    {
        cout << endl
             << "engine found" << endl;
    }
    else
    {
        cout << endl
             << "engine not found" << endl;
    }
}
