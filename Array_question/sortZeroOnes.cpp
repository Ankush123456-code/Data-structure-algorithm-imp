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
void soort(vector<int> &v)
{
    int zero = 0;
    int ones = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zero++;
        }
        else if (v[i] == 1)
        {
            ones++;
        }
    }
    for (int j = 0; j < zero; j++)
    {
        v[j] = 0;
    }
    for (int m = zero; m < (zero + ones); m++)
    {
        v[m] = 1;
    }
    for (int l = (zero + ones); l < v.size(); l++)
    {
        v[l] = 2;
    }
}
int main()
{
    vector<int> v{0, 1, 2, 1, 1, 0, 0, 1, 1};
    soort(v);
    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}