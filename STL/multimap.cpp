#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<string, int> mm;

    mm.emplace("sonar", 10);
    mm.emplace("sonar", 20);
    mm.emplace("sonar", 30);
    mm.emplace("sonar", 10);

    mm.erase(mm.find("sonar")); // removes from first index

    for (auto m : mm)
    {
        cout << m.first << " " << m.second << endl;
    }
}