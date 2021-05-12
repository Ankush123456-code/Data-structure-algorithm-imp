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
int oddoccurence(vector<int> &v)
{
    int res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        res = res ^ v[i];
    }
    return res;
}
int main()
{
    vector<int> v{4, 3, 1, 3, 4, 4, 4, 5, 5, 3, 3};
    cout << oddoccurence(v);
    return 0;
}