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
void segragate(vector<int> &v)
{
    int j = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            v[j++] = v[i];
        }
    }
    while (j < v.size())
    {
        v[j++] = 1;
    }
}
void printc(vector<int> &v)
{
    for (auto &&i : v)
    {
        cout << i << " ";
    }
}
int main()
{
    vector<int> v{0, 1, 1, 0, 0, 0, 1, 0, 1};
    segragate(v);
    printc(v);
    return 0;
}