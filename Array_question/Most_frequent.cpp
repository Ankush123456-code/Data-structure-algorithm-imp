#include <iostream>
#include <string>
#include <Cstdio>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <unordered_map>
#include <cmath>
using namespace std;
int most_frequent(vector<int> &v)
{
    unordered_map<int, int> m;
    for (int i = 0; i < v.size(); i++)
    {

        m[v[i]]++;
    }
    int max_count = 0;
    int res = -1;

    for (auto &&i : m)
    {
        if (i.second > max_count)
        {
            res = i.first;
            max_count = i.second;
        }
    }
    return res;
}
int main()
{
    vector<int> v;
    int c;
    int size;
    cout << "enter the size of array" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> c;
        v.push_back(c);
    }

    int a = most_frequent(v);
    cout << a << endl;
    return 0;
}