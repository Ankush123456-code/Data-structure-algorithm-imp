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
int MIni(vector<int> &v)
{

    int mini = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < mini)
        {
            mini = v[i];
        }
    }
    return mini;
}
int main()
{
    vector<int> v{7, 8, 9, 1, 2, 3, 4, 5, 6};
    cout << MIni(v);

    return 0;
}