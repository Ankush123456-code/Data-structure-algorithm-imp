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
int max_diff(vector<int> &v)
{
    int min = INT32_MAX;
    int max = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
        if ((v[i] - min) > max)
        {
            max = v[i] - min;
        }
    }
    return max;
}
int main()
{
    vector<int> v{7, 1, 2, 3, 4, 9};
    int v1 = max_diff(v);
    cout << v1 << endl;
    return 0;
}