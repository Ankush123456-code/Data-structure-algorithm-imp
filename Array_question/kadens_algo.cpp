#include <iostream>
#include <string>
#include <Cstdio>
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
using namespace std;
int kadens(vector<int> &v)
{
    int sum = 0;
    int max_sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (sum < 0)
        {
            sum = v[i];
        }
        else
        {
            sum = sum + v[i];
        }
        max_sum = max(sum, max_sum);
    }
    return max_sum;
}
int main()
{
    vector<int> v{1, 2, -5, 4, 3, 8, 5};
    int a=kadens(v);
    cout<<a<<endl;
    return 0;
}