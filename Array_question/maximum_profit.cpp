#include <bits/stdc++.h>
using namespace std;
int Maximum_stock(vector<int> &v)
{
    if (v.size() == 1)
    {
        return 0;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < 0)
        {
            return 0;
        }
    }
    int total_profit = 0;
    int curr_profit = 0;

    for (int i = 0; i < v.size() - 1; i++)
    {
        int profit = 0;
        int j = i + 1;
        if (v[i] < v[j])
        {

            curr_profit = v[j] - v[i];

            if (profit > 2)
            {
                break;
            }
            else
            {
                profit = max(curr_profit, profit);
            }
        }
        total_profit = total_profit + profit;
    }

    return total_profit;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        v.push_back(c);
    }

    cout << Maximum_stock(v);
    return 0;
}