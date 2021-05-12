#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
using namespace std;
int main()
{
    vector<int> v{1, 2, 1, 2, 3, 4, 5, 8, 7};
    map<int, int> ma;
    for (int i = 0; i < v.size(); i++)
    {
        ma[v[i]]++;
    }
    for (auto &&i : ma)
    {
        cout << i.first << " occurs " << i.second << endl;
    }

    return 0;
}