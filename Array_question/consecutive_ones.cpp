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
int maximum_consecutive_ones(vector<int> &v)
{
    int count = 0;
    int max_count = 0;
    for (auto &&i : v)
    {
        if (i == 1)
        {
            count++;
            max_count = max(count, max_count);
        }
        else
        {
            count = 0;
        }
    }
    return max_count;
}
int main()
{
    vector<int> v{1, 1, 0, 1, 1, 1, 1, 1, 0};
    cout << maximum_consecutive_ones(v);
    return 0;
}