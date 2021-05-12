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
int maximumum(vector<int> &v, int k)
{
    int maximum_sum = 0;
    for (int i = 0; i <= v.size() - k; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum = sum + v[j];
        }
        maximum_sum = max(sum, maximum_sum);
    }
    return maximum_sum;
}
int efficient(vector<int> &v, int k)
{
    int sum = 0;
    int start = 0;
    int maximumsum = 0;
    for (int end = 0; end < v.size(); end++)
    {
        sum = sum + v[end];
        if (end >= k - 1)
        {
            maximumsum = max(sum, maximumsum);
            sum = sum - v[start];
            start++;
        }
        
    }
    return maximumsum;
}
int main()
{
    vector<int> v{1, 2, 3, 4, 8, 9};
    int k = 3;

     int a = maximumum(v, k);
    ///int a = efficient(v, k);
    cout << a << endl;
    return 0;
}