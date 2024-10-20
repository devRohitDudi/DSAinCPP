#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> prices = {7, 1, 3, 6, 5, 2, 4};

    int maxProfit = 0, bestBuy = prices[0];
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    cout << "best day to buy stocks is: " << bestBuy << endl;
    cout << "best day to sell stocks is: " << maxProfit << endl;
}
// connected to github from mint