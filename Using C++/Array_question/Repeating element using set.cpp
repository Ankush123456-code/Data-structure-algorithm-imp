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
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    set<int> s;
    bool count1 = false;
    for (int i = 0; i < v.size(); i++)
    {
        auto pos = s.find(v[i]);
        if (*pos == v[i])
        {
            count1 = true;
            cout << "duplicate are  " << v[i] << endl;
        }
        else
        {
            s.insert(v[i]);
        }
    }
    if (!count1)
    {
        cout << -1;
    }

    return 0;
}