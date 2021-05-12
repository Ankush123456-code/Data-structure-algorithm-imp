#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <cmath>
using namespace std;
vector<int> disappered(vector<int> &v)
{
    vector<int> v1;
    cout << v.size() << endl;
    set<int> s;
    for (auto &&i : v)
    {
        s.insert(i);
    }
    for (int i = 1; i <= v.size(); i++)
    {
        if ((s.find(i) == s.end()))
        {
            v1.push_back(i);
        }
    }
    return v1;
}
int main()
{

    vector<int> v{1, 1, 2, 4, 5, 6, 7, 8, 9, 3, 6};
    vector<int> v1;
    v1 = disappered(v);
    for (auto &&i : v1)
    {
        cout << i << " ";
    }

    return 0;
}