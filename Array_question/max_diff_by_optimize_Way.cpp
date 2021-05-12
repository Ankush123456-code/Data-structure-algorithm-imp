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
int max_diffe(vector<int> &v)
{
    int maxdiff = v[1] - v[0];
    int mini = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if ((v[i] - mini) > maxdiff)
        {
            maxdiff = v[i] - mini;
        }
        else if (v[i] < mini)
        {
            mini = v[i];
        }
    }
    return maxdiff;
}
int main()
{
    vector<int> v{2, 7, 5, 3, 13, 1};
    auto it=max_element(v.begin(),v.end());
    cout<<*it<<endl;
    cout << max_diffe(v) << endl;

    return 0;
}