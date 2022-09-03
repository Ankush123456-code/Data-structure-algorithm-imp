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
vector<int> mergesorted(vector<int> &v, vector<int> &v1)
{
    int l1 = v.size();
    int l2 = v1.size();
    int l3 = l1 + l2;
    vector<int> v2(l3);
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < l1 && j < l2)
    {
        if (v[i] < v1[j])
        {
            v2[k++] = v[i++];
        }
        else
        {
            v2[k++] = v1[j++];
        }
    }
    while (i < l1)
    {
        v2[k++] = v[i++];
    }
    while (j < l2)
    {
        v2[k++] = v1[j++];
    }
    return v2;
}
int main()
{
    vector<int> v{1, 2, 3, 5, 4, 7};
    sort(v.begin(), v.end());
    vector<int> v1{7, 8, 9, 4, 5, 1, 2};
    sort(v1.begin(), v1.end());

    vector<int> v2 = mergesorted(v, v1);
    for (auto &&i : v2)
    {
        cout << i << " ";
    }

    return 0;
}