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
    vector<int> v{5, 1, 2, 6, 4, 4, 5};
    sort(v.begin(), v.end());
    int j = 0;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] != v[i + 1])
        {
            v[j++] = v[i];
        }
    }
    v[j++] = v[v.size() - 1];
    v.resize(j);
    for (auto i : v)
    {
        cout << i << endl;
    }

    /* set<int> s;
    for (int i = 0; i < v.size(); i++)
    {
        s.insert(v[i]);
    }
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout<<*i<<" ";
    }
*/
    return 0;
}