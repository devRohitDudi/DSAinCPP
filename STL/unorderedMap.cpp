#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> udm;

    udm.emplace("TFR", 40);
    udm.emplace("DME", 50);
    udm.emplace("SSR", 20);
    udm.emplace("GTC", 15);
    udm.emplace("GTC", 40); // not include

    for (auto p : udm)
    {
        cout << p.first << " " << p.second << endl;
    }
}